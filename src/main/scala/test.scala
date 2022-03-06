import libraylib.functions.*
import libraylib.types.*

import scala.scalanative.unsafe.*
import scala.scalanative.unsigned.*

@main def hello_raylib =
  val screenWidth = 800
  val screenHeight = 450
  import libraylib.functions.*
  import libraylib.types.*

  InitWindow(
    screenWidth,
    screenHeight,
    c"hello raylib from Scala Native"
  )

  Zone { implicit z =>

    val WHITE = Color(255.toUByte, 255.toUByte, 255.toUByte, 255.toUByte)
    val GREEN = Color(0.toUByte, 255.toUByte, 0.toUByte, 255.toUByte)
    val BLUE = Color(0.toUByte, 0.toUByte, 255.toUByte, 255.toUByte)
    val BLACK = Color(0.toUByte, 0.toUByte, 0.toUByte, 255.toUByte)

    val redBallPosition = Vector2(screenWidth / 2, screenHeight / 2)
    val blueBallPositionPtr = Vector2(0, 0)
    val blueBallPosition = !blueBallPositionPtr

    SetTargetFPS(200)

    var i = 0

    while !WindowShouldClose() do

      !redBallPosition = GetMousePosition()
      BeginDrawing()

      import KeyboardKey.*

      if IsKeyDown(KEY_RIGHT.int) then blueBallPosition.x += 2.0f;
      if IsKeyDown(KEY_LEFT.int) then blueBallPosition.x -= 2.0f;
      if IsKeyDown(KEY_UP.int) then blueBallPosition.y -= 2.0f;
      if IsKeyDown(KEY_DOWN.int) then blueBallPosition.y += 2.0f;

      ClearBackground(!WHITE)
      DrawText(
        c"Red ball will follow your pointer,\n move blue with arrow keys",
        10,
        10,
        20,
        !BLACK
      )
      DrawCircleV(!redBallPosition, 50, !GREEN)
      DrawCircleV(blueBallPosition, 20, !BLUE)
      EndDrawing()
    end while
    CloseWindow()
  }
end hello_raylib
