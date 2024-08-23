import bindgen.plugin.BindgenMode

Global / onChangedBuildSource := ReloadOnSourceChanges

scalaVersion := "3.5.0"

enablePlugins(ScalaNativePlugin, BindgenPlugin)

import bindgen.interface.Binding

bindgenBindings := Seq(
  Binding(baseDirectory.value / "raylib" / "src" / "raylib.h", "libraylib")
    .withCImports(
      List("raylib.h")
    )
)

bindgenMode := BindgenMode.Manual(
  scalaDir = sourceDirectory.value / "main" / "scala" / "generated",
  cDir = (Compile / resourceDirectory).value / "scala-native"
)

nativeConfig := {
  val conf = nativeConfig.value
  val staticLib = baseDirectory.value / "raylib" / "src" / "libraylib.a"
  val include = baseDirectory.value / "raylib" / "src"

  if(!staticLib.exists()) {
    sLog.value.error(s"Couldn't find [$staticLib] - to build it, run [cd raylib/src && make PLATFORM=PLATFORM_DESKTOP]")
  }


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
