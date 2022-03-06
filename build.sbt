Global / onChangedBuildSource := ReloadOnSourceChanges
scalaVersion := "3.1.1"
enablePlugins(ScalaNativePlugin, BindgenPlugin)

import bindgen.interface.Binding

bindgenBindings := Seq(
  Binding(
    baseDirectory.value / "raylib" / "src" / "raylib.h",
    "libraylib",
    cImports = List("raylib.h")
  )
)

nativeConfig := {
  val conf = nativeConfig.value
  val staticLib = baseDirectory.value / "raylib" / "src" / "libraylib.a"
  val include = baseDirectory.value / "raylib" / "src"

  val extras =
    "-framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL"
      .split(" ")
      .toList

  conf
    .withLinkingOptions(
      conf.linkingOptions ++ List(staticLib.toString) ++ extras
    )
    .withCompileOptions(conf.compileOptions ++ List(s"-I$include") ++ extras)
}
