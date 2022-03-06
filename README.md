# sn-raylib

An example from the site for [sn-bindgen](https://sn-bindgen.indoorvivants.com/)

1. This example was written on an Apple machine, and thus the clang flags were hardcoded, according to instructions: https://github.com/raysan5/raylib/wiki/Working-on-macOS. Change them to the appropriate flags for your platform.

2. `git submodule update --init && cd raylib/src && make` should build a static library
3. `sbt run` will run the application, as long as the clang flags are appropriate for your platform
