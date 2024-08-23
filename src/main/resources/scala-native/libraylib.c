#include <string.h>
#include "raylib.h"

void __sn_wrap_libraylib_AttachAudioStreamProcessor(AudioStream *stream, AudioCallback processor) {
 AttachAudioStreamProcessor(*stream, processor);
};


void __sn_wrap_libraylib_BeginMode2D(Camera2D *camera) {
 BeginMode2D(*camera);
};


void __sn_wrap_libraylib_BeginMode3D(Camera3D *camera) {
 BeginMode3D(*camera);
};


void __sn_wrap_libraylib_BeginShaderMode(Shader *shader) {
 BeginShaderMode(*shader);
};


void __sn_wrap_libraylib_BeginTextureMode(RenderTexture2D *target) {
 BeginTextureMode(*target);
};


void __sn_wrap_libraylib_BeginVrStereoMode(VrStereoConfig *config) {
 BeginVrStereoMode(*config);
};


_Bool __sn_wrap_libraylib_CheckCollisionBoxSphere(BoundingBox *box, Vector3 *center, float radius) {
 return CheckCollisionBoxSphere(*box, *center, radius);
};


_Bool __sn_wrap_libraylib_CheckCollisionBoxes(BoundingBox *box1, BoundingBox *box2) {
 return CheckCollisionBoxes(*box1, *box2);
};


_Bool __sn_wrap_libraylib_CheckCollisionCircleLine(Vector2 *center, float radius, Vector2 *p1, Vector2 *p2) {
 return CheckCollisionCircleLine(*center, radius, *p1, *p2);
};


_Bool __sn_wrap_libraylib_CheckCollisionCircleRec(Vector2 *center, float radius, Rectangle *rec) {
 return CheckCollisionCircleRec(*center, radius, *rec);
};


_Bool __sn_wrap_libraylib_CheckCollisionCircles(Vector2 *center1, float radius1, Vector2 *center2, float radius2) {
 return CheckCollisionCircles(*center1, radius1, *center2, radius2);
};


_Bool __sn_wrap_libraylib_CheckCollisionLines(Vector2 *startPos1, Vector2 *endPos1, Vector2 *startPos2, Vector2 *endPos2, Vector2 * collisionPoint) {
 return CheckCollisionLines(*startPos1, *endPos1, *startPos2, *endPos2, collisionPoint);
};


_Bool __sn_wrap_libraylib_CheckCollisionPointCircle(Vector2 *point, Vector2 *center, float radius) {
 return CheckCollisionPointCircle(*point, *center, radius);
};


_Bool __sn_wrap_libraylib_CheckCollisionPointLine(Vector2 *point, Vector2 *p1, Vector2 *p2, int threshold) {
 return CheckCollisionPointLine(*point, *p1, *p2, threshold);
};


_Bool __sn_wrap_libraylib_CheckCollisionPointPoly(Vector2 *point, const Vector2 * points, int pointCount) {
 return CheckCollisionPointPoly(*point, points, pointCount);
};


_Bool __sn_wrap_libraylib_CheckCollisionPointRec(Vector2 *point, Rectangle *rec) {
 return CheckCollisionPointRec(*point, *rec);
};


_Bool __sn_wrap_libraylib_CheckCollisionPointTriangle(Vector2 *point, Vector2 *p1, Vector2 *p2, Vector2 *p3) {
 return CheckCollisionPointTriangle(*point, *p1, *p2, *p3);
};


_Bool __sn_wrap_libraylib_CheckCollisionRecs(Rectangle *rec1, Rectangle *rec2) {
 return CheckCollisionRecs(*rec1, *rec2);
};


_Bool __sn_wrap_libraylib_CheckCollisionSpheres(Vector3 *center1, float radius1, Vector3 *center2, float radius2) {
 return CheckCollisionSpheres(*center1, radius1, *center2, radius2);
};


void __sn_wrap_libraylib_ClearBackground(Color *color) {
 ClearBackground(*color);
};


void __sn_wrap_libraylib_ColorAlpha(Color *color, float alpha, Color *____return) {
  Color ____ret = ColorAlpha(*color, alpha);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_ColorAlphaBlend(Color *dst, Color *src, Color *tint, Color *____return) {
  Color ____ret = ColorAlphaBlend(*dst, *src, *tint);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_ColorBrightness(Color *color, float factor, Color *____return) {
  Color ____ret = ColorBrightness(*color, factor);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_ColorContrast(Color *color, float contrast, Color *____return) {
  Color ____ret = ColorContrast(*color, contrast);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_ColorFromHSV(float hue, float saturation, float value, Color *____return) {
  Color ____ret = ColorFromHSV(hue, saturation, value);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_ColorFromNormalized(Vector4 *normalized, Color *____return) {
  Color ____ret = ColorFromNormalized(*normalized);
  memcpy(____return, &____ret, sizeof(Color));
}


_Bool __sn_wrap_libraylib_ColorIsEqual(Color *col1, Color *col2) {
 return ColorIsEqual(*col1, *col2);
};


void __sn_wrap_libraylib_ColorNormalize(Color *color, Vector4 *____return) {
  Vector4 ____ret = ColorNormalize(*color);
  memcpy(____return, &____ret, sizeof(Vector4));
}


void __sn_wrap_libraylib_ColorTint(Color *color, Color *tint, Color *____return) {
  Color ____ret = ColorTint(*color, *tint);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_ColorToHSV(Color *color, Vector3 *____return) {
  Vector3 ____ret = ColorToHSV(*color);
  memcpy(____return, &____ret, sizeof(Vector3));
}


int __sn_wrap_libraylib_ColorToInt(Color *color) {
 return ColorToInt(*color);
};


void __sn_wrap_libraylib_DetachAudioStreamProcessor(AudioStream *stream, AudioCallback processor) {
 DetachAudioStreamProcessor(*stream, processor);
};


void __sn_wrap_libraylib_DrawBillboard(Camera *camera, Texture2D *texture, Vector3 *position, float scale, Color *tint) {
 DrawBillboard(*camera, *texture, *position, scale, *tint);
};


void __sn_wrap_libraylib_DrawBillboardPro(Camera *camera, Texture2D *texture, Rectangle *source, Vector3 *position, Vector3 *up, Vector2 *size, Vector2 *origin, float rotation, Color *tint) {
 DrawBillboardPro(*camera, *texture, *source, *position, *up, *size, *origin, rotation, *tint);
};


void __sn_wrap_libraylib_DrawBillboardRec(Camera *camera, Texture2D *texture, Rectangle *source, Vector3 *position, Vector2 *size, Color *tint) {
 DrawBillboardRec(*camera, *texture, *source, *position, *size, *tint);
};


void __sn_wrap_libraylib_DrawBoundingBox(BoundingBox *box, Color *color) {
 DrawBoundingBox(*box, *color);
};


void __sn_wrap_libraylib_DrawCapsule(Vector3 *startPos, Vector3 *endPos, float radius, int slices, int rings, Color *color) {
 DrawCapsule(*startPos, *endPos, radius, slices, rings, *color);
};


void __sn_wrap_libraylib_DrawCapsuleWires(Vector3 *startPos, Vector3 *endPos, float radius, int slices, int rings, Color *color) {
 DrawCapsuleWires(*startPos, *endPos, radius, slices, rings, *color);
};


void __sn_wrap_libraylib_DrawCircle(int centerX, int centerY, float radius, Color *color) {
 DrawCircle(centerX, centerY, radius, *color);
};


void __sn_wrap_libraylib_DrawCircle3D(Vector3 *center, float radius, Vector3 *rotationAxis, float rotationAngle, Color *color) {
 DrawCircle3D(*center, radius, *rotationAxis, rotationAngle, *color);
};


void __sn_wrap_libraylib_DrawCircleGradient(int centerX, int centerY, float radius, Color *inner, Color *outer) {
 DrawCircleGradient(centerX, centerY, radius, *inner, *outer);
};


void __sn_wrap_libraylib_DrawCircleLines(int centerX, int centerY, float radius, Color *color) {
 DrawCircleLines(centerX, centerY, radius, *color);
};


void __sn_wrap_libraylib_DrawCircleLinesV(Vector2 *center, float radius, Color *color) {
 DrawCircleLinesV(*center, radius, *color);
};


void __sn_wrap_libraylib_DrawCircleSector(Vector2 *center, float radius, float startAngle, float endAngle, int segments, Color *color) {
 DrawCircleSector(*center, radius, startAngle, endAngle, segments, *color);
};


void __sn_wrap_libraylib_DrawCircleSectorLines(Vector2 *center, float radius, float startAngle, float endAngle, int segments, Color *color) {
 DrawCircleSectorLines(*center, radius, startAngle, endAngle, segments, *color);
};


void __sn_wrap_libraylib_DrawCircleV(Vector2 *center, float radius, Color *color) {
 DrawCircleV(*center, radius, *color);
};


void __sn_wrap_libraylib_DrawCube(Vector3 *position, float width, float height, float length, Color *color) {
 DrawCube(*position, width, height, length, *color);
};


void __sn_wrap_libraylib_DrawCubeV(Vector3 *position, Vector3 *size, Color *color) {
 DrawCubeV(*position, *size, *color);
};


void __sn_wrap_libraylib_DrawCubeWires(Vector3 *position, float width, float height, float length, Color *color) {
 DrawCubeWires(*position, width, height, length, *color);
};


void __sn_wrap_libraylib_DrawCubeWiresV(Vector3 *position, Vector3 *size, Color *color) {
 DrawCubeWiresV(*position, *size, *color);
};


void __sn_wrap_libraylib_DrawCylinder(Vector3 *position, float radiusTop, float radiusBottom, float height, int slices, Color *color) {
 DrawCylinder(*position, radiusTop, radiusBottom, height, slices, *color);
};


void __sn_wrap_libraylib_DrawCylinderEx(Vector3 *startPos, Vector3 *endPos, float startRadius, float endRadius, int sides, Color *color) {
 DrawCylinderEx(*startPos, *endPos, startRadius, endRadius, sides, *color);
};


void __sn_wrap_libraylib_DrawCylinderWires(Vector3 *position, float radiusTop, float radiusBottom, float height, int slices, Color *color) {
 DrawCylinderWires(*position, radiusTop, radiusBottom, height, slices, *color);
};


void __sn_wrap_libraylib_DrawCylinderWiresEx(Vector3 *startPos, Vector3 *endPos, float startRadius, float endRadius, int sides, Color *color) {
 DrawCylinderWiresEx(*startPos, *endPos, startRadius, endRadius, sides, *color);
};


void __sn_wrap_libraylib_DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color *color) {
 DrawEllipse(centerX, centerY, radiusH, radiusV, *color);
};


void __sn_wrap_libraylib_DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color *color) {
 DrawEllipseLines(centerX, centerY, radiusH, radiusV, *color);
};


void __sn_wrap_libraylib_DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color *color) {
 DrawLine(startPosX, startPosY, endPosX, endPosY, *color);
};


void __sn_wrap_libraylib_DrawLine3D(Vector3 *startPos, Vector3 *endPos, Color *color) {
 DrawLine3D(*startPos, *endPos, *color);
};


void __sn_wrap_libraylib_DrawLineBezier(Vector2 *startPos, Vector2 *endPos, float thick, Color *color) {
 DrawLineBezier(*startPos, *endPos, thick, *color);
};


void __sn_wrap_libraylib_DrawLineEx(Vector2 *startPos, Vector2 *endPos, float thick, Color *color) {
 DrawLineEx(*startPos, *endPos, thick, *color);
};


void __sn_wrap_libraylib_DrawLineStrip(const Vector2 * points, int pointCount, Color *color) {
 DrawLineStrip(points, pointCount, *color);
};


void __sn_wrap_libraylib_DrawLineV(Vector2 *startPos, Vector2 *endPos, Color *color) {
 DrawLineV(*startPos, *endPos, *color);
};


void __sn_wrap_libraylib_DrawMesh(Mesh *mesh, Material *material, Matrix *transform) {
 DrawMesh(*mesh, *material, *transform);
};


void __sn_wrap_libraylib_DrawMeshInstanced(Mesh *mesh, Material *material, const Matrix * transforms, int instances) {
 DrawMeshInstanced(*mesh, *material, transforms, instances);
};


void __sn_wrap_libraylib_DrawModel(Model *model, Vector3 *position, float scale, Color *tint) {
 DrawModel(*model, *position, scale, *tint);
};


void __sn_wrap_libraylib_DrawModelEx(Model *model, Vector3 *position, Vector3 *rotationAxis, float rotationAngle, Vector3 *scale, Color *tint) {
 DrawModelEx(*model, *position, *rotationAxis, rotationAngle, *scale, *tint);
};


void __sn_wrap_libraylib_DrawModelWires(Model *model, Vector3 *position, float scale, Color *tint) {
 DrawModelWires(*model, *position, scale, *tint);
};


void __sn_wrap_libraylib_DrawModelWiresEx(Model *model, Vector3 *position, Vector3 *rotationAxis, float rotationAngle, Vector3 *scale, Color *tint) {
 DrawModelWiresEx(*model, *position, *rotationAxis, rotationAngle, *scale, *tint);
};


void __sn_wrap_libraylib_DrawPixel(int posX, int posY, Color *color) {
 DrawPixel(posX, posY, *color);
};


void __sn_wrap_libraylib_DrawPixelV(Vector2 *position, Color *color) {
 DrawPixelV(*position, *color);
};


void __sn_wrap_libraylib_DrawPlane(Vector3 *centerPos, Vector2 *size, Color *color) {
 DrawPlane(*centerPos, *size, *color);
};


void __sn_wrap_libraylib_DrawPoint3D(Vector3 *position, Color *color) {
 DrawPoint3D(*position, *color);
};


void __sn_wrap_libraylib_DrawPoly(Vector2 *center, int sides, float radius, float rotation, Color *color) {
 DrawPoly(*center, sides, radius, rotation, *color);
};


void __sn_wrap_libraylib_DrawPolyLines(Vector2 *center, int sides, float radius, float rotation, Color *color) {
 DrawPolyLines(*center, sides, radius, rotation, *color);
};


void __sn_wrap_libraylib_DrawPolyLinesEx(Vector2 *center, int sides, float radius, float rotation, float lineThick, Color *color) {
 DrawPolyLinesEx(*center, sides, radius, rotation, lineThick, *color);
};


void __sn_wrap_libraylib_DrawRay(Ray *ray, Color *color) {
 DrawRay(*ray, *color);
};


void __sn_wrap_libraylib_DrawRectangle(int posX, int posY, int width, int height, Color *color) {
 DrawRectangle(posX, posY, width, height, *color);
};


void __sn_wrap_libraylib_DrawRectangleGradientEx(Rectangle *rec, Color *topLeft, Color *bottomLeft, Color *topRight, Color *bottomRight) {
 DrawRectangleGradientEx(*rec, *topLeft, *bottomLeft, *topRight, *bottomRight);
};


void __sn_wrap_libraylib_DrawRectangleGradientH(int posX, int posY, int width, int height, Color *left, Color *right) {
 DrawRectangleGradientH(posX, posY, width, height, *left, *right);
};


void __sn_wrap_libraylib_DrawRectangleGradientV(int posX, int posY, int width, int height, Color *top, Color *bottom) {
 DrawRectangleGradientV(posX, posY, width, height, *top, *bottom);
};


void __sn_wrap_libraylib_DrawRectangleLines(int posX, int posY, int width, int height, Color *color) {
 DrawRectangleLines(posX, posY, width, height, *color);
};


void __sn_wrap_libraylib_DrawRectangleLinesEx(Rectangle *rec, float lineThick, Color *color) {
 DrawRectangleLinesEx(*rec, lineThick, *color);
};


void __sn_wrap_libraylib_DrawRectanglePro(Rectangle *rec, Vector2 *origin, float rotation, Color *color) {
 DrawRectanglePro(*rec, *origin, rotation, *color);
};


void __sn_wrap_libraylib_DrawRectangleRec(Rectangle *rec, Color *color) {
 DrawRectangleRec(*rec, *color);
};


void __sn_wrap_libraylib_DrawRectangleRounded(Rectangle *rec, float roundness, int segments, Color *color) {
 DrawRectangleRounded(*rec, roundness, segments, *color);
};


void __sn_wrap_libraylib_DrawRectangleRoundedLines(Rectangle *rec, float roundness, int segments, Color *color) {
 DrawRectangleRoundedLines(*rec, roundness, segments, *color);
};


void __sn_wrap_libraylib_DrawRectangleRoundedLinesEx(Rectangle *rec, float roundness, int segments, float lineThick, Color *color) {
 DrawRectangleRoundedLinesEx(*rec, roundness, segments, lineThick, *color);
};


void __sn_wrap_libraylib_DrawRectangleV(Vector2 *position, Vector2 *size, Color *color) {
 DrawRectangleV(*position, *size, *color);
};


void __sn_wrap_libraylib_DrawRing(Vector2 *center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color *color) {
 DrawRing(*center, innerRadius, outerRadius, startAngle, endAngle, segments, *color);
};


void __sn_wrap_libraylib_DrawRingLines(Vector2 *center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color *color) {
 DrawRingLines(*center, innerRadius, outerRadius, startAngle, endAngle, segments, *color);
};


void __sn_wrap_libraylib_DrawSphere(Vector3 *centerPos, float radius, Color *color) {
 DrawSphere(*centerPos, radius, *color);
};


void __sn_wrap_libraylib_DrawSphereEx(Vector3 *centerPos, float radius, int rings, int slices, Color *color) {
 DrawSphereEx(*centerPos, radius, rings, slices, *color);
};


void __sn_wrap_libraylib_DrawSphereWires(Vector3 *centerPos, float radius, int rings, int slices, Color *color) {
 DrawSphereWires(*centerPos, radius, rings, slices, *color);
};


void __sn_wrap_libraylib_DrawSplineBasis(const Vector2 * points, int pointCount, float thick, Color *color) {
 DrawSplineBasis(points, pointCount, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineBezierCubic(const Vector2 * points, int pointCount, float thick, Color *color) {
 DrawSplineBezierCubic(points, pointCount, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineBezierQuadratic(const Vector2 * points, int pointCount, float thick, Color *color) {
 DrawSplineBezierQuadratic(points, pointCount, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineCatmullRom(const Vector2 * points, int pointCount, float thick, Color *color) {
 DrawSplineCatmullRom(points, pointCount, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineLinear(const Vector2 * points, int pointCount, float thick, Color *color) {
 DrawSplineLinear(points, pointCount, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineSegmentBasis(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float thick, Color *color) {
 DrawSplineSegmentBasis(*p1, *p2, *p3, *p4, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineSegmentBezierCubic(Vector2 *p1, Vector2 *c2, Vector2 *c3, Vector2 *p4, float thick, Color *color) {
 DrawSplineSegmentBezierCubic(*p1, *c2, *c3, *p4, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineSegmentBezierQuadratic(Vector2 *p1, Vector2 *c2, Vector2 *p3, float thick, Color *color) {
 DrawSplineSegmentBezierQuadratic(*p1, *c2, *p3, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineSegmentCatmullRom(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float thick, Color *color) {
 DrawSplineSegmentCatmullRom(*p1, *p2, *p3, *p4, thick, *color);
};


void __sn_wrap_libraylib_DrawSplineSegmentLinear(Vector2 *p1, Vector2 *p2, float thick, Color *color) {
 DrawSplineSegmentLinear(*p1, *p2, thick, *color);
};


void __sn_wrap_libraylib_DrawText(const char * text, int posX, int posY, int fontSize, Color *color) {
 DrawText(text, posX, posY, fontSize, *color);
};


void __sn_wrap_libraylib_DrawTextCodepoint(Font *font, int codepoint, Vector2 *position, float fontSize, Color *tint) {
 DrawTextCodepoint(*font, codepoint, *position, fontSize, *tint);
};


void __sn_wrap_libraylib_DrawTextCodepoints(Font *font, const int * codepoints, int codepointCount, Vector2 *position, float fontSize, float spacing, Color *tint) {
 DrawTextCodepoints(*font, codepoints, codepointCount, *position, fontSize, spacing, *tint);
};


void __sn_wrap_libraylib_DrawTextEx(Font *font, const char * text, Vector2 *position, float fontSize, float spacing, Color *tint) {
 DrawTextEx(*font, text, *position, fontSize, spacing, *tint);
};


void __sn_wrap_libraylib_DrawTextPro(Font *font, const char * text, Vector2 *position, Vector2 *origin, float rotation, float fontSize, float spacing, Color *tint) {
 DrawTextPro(*font, text, *position, *origin, rotation, fontSize, spacing, *tint);
};


void __sn_wrap_libraylib_DrawTexture(Texture2D *texture, int posX, int posY, Color *tint) {
 DrawTexture(*texture, posX, posY, *tint);
};


void __sn_wrap_libraylib_DrawTextureEx(Texture2D *texture, Vector2 *position, float rotation, float scale, Color *tint) {
 DrawTextureEx(*texture, *position, rotation, scale, *tint);
};


void __sn_wrap_libraylib_DrawTextureNPatch(Texture2D *texture, NPatchInfo *nPatchInfo, Rectangle *dest, Vector2 *origin, float rotation, Color *tint) {
 DrawTextureNPatch(*texture, *nPatchInfo, *dest, *origin, rotation, *tint);
};


void __sn_wrap_libraylib_DrawTexturePro(Texture2D *texture, Rectangle *source, Rectangle *dest, Vector2 *origin, float rotation, Color *tint) {
 DrawTexturePro(*texture, *source, *dest, *origin, rotation, *tint);
};


void __sn_wrap_libraylib_DrawTextureRec(Texture2D *texture, Rectangle *source, Vector2 *position, Color *tint) {
 DrawTextureRec(*texture, *source, *position, *tint);
};


void __sn_wrap_libraylib_DrawTextureV(Texture2D *texture, Vector2 *position, Color *tint) {
 DrawTextureV(*texture, *position, *tint);
};


void __sn_wrap_libraylib_DrawTriangle(Vector2 *v1, Vector2 *v2, Vector2 *v3, Color *color) {
 DrawTriangle(*v1, *v2, *v3, *color);
};


void __sn_wrap_libraylib_DrawTriangle3D(Vector3 *v1, Vector3 *v2, Vector3 *v3, Color *color) {
 DrawTriangle3D(*v1, *v2, *v3, *color);
};


void __sn_wrap_libraylib_DrawTriangleFan(const Vector2 * points, int pointCount, Color *color) {
 DrawTriangleFan(points, pointCount, *color);
};


void __sn_wrap_libraylib_DrawTriangleLines(Vector2 *v1, Vector2 *v2, Vector2 *v3, Color *color) {
 DrawTriangleLines(*v1, *v2, *v3, *color);
};


void __sn_wrap_libraylib_DrawTriangleStrip(const Vector2 * points, int pointCount, Color *color) {
 DrawTriangleStrip(points, pointCount, *color);
};


void __sn_wrap_libraylib_DrawTriangleStrip3D(const Vector3 * points, int pointCount, Color *color) {
 DrawTriangleStrip3D(points, pointCount, *color);
};


_Bool __sn_wrap_libraylib_ExportAutomationEventList(AutomationEventList *list, const char * fileName) {
 return ExportAutomationEventList(*list, fileName);
};


_Bool __sn_wrap_libraylib_ExportFontAsCode(Font *font, const char * fileName) {
 return ExportFontAsCode(*font, fileName);
};


_Bool __sn_wrap_libraylib_ExportImage(Image *image, const char * fileName) {
 return ExportImage(*image, fileName);
};


_Bool __sn_wrap_libraylib_ExportImageAsCode(Image *image, const char * fileName) {
 return ExportImageAsCode(*image, fileName);
};


unsigned char * __sn_wrap_libraylib_ExportImageToMemory(Image *image, const char * fileType, int * fileSize) {
 return ExportImageToMemory(*image, fileType, fileSize);
};


_Bool __sn_wrap_libraylib_ExportMesh(Mesh *mesh, const char * fileName) {
 return ExportMesh(*mesh, fileName);
};


_Bool __sn_wrap_libraylib_ExportMeshAsCode(Mesh *mesh, const char * fileName) {
 return ExportMeshAsCode(*mesh, fileName);
};


_Bool __sn_wrap_libraylib_ExportWave(Wave *wave, const char * fileName) {
 return ExportWave(*wave, fileName);
};


_Bool __sn_wrap_libraylib_ExportWaveAsCode(Wave *wave, const char * fileName) {
 return ExportWaveAsCode(*wave, fileName);
};


void __sn_wrap_libraylib_Fade(Color *color, float alpha, Color *____return) {
  Color ____ret = Fade(*color, alpha);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_GenImageCellular(int width, int height, int tileSize, Image *____return) {
  Image ____ret = GenImageCellular(width, height, tileSize);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageChecked(int width, int height, int checksX, int checksY, Color *col1, Color *col2, Image *____return) {
  Image ____ret = GenImageChecked(width, height, checksX, checksY, *col1, *col2);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageColor(int width, int height, Color *color, Image *____return) {
  Image ____ret = GenImageColor(width, height, *color);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageFontAtlas(const GlyphInfo * glyphs, Rectangle ** glyphRecs, int glyphCount, int fontSize, int padding, int packMethod, Image *____return) {
  Image ____ret = GenImageFontAtlas(glyphs, glyphRecs, glyphCount, fontSize, padding, packMethod);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageGradientLinear(int width, int height, int direction, Color *start, Color *end, Image *____return) {
  Image ____ret = GenImageGradientLinear(width, height, direction, *start, *end);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageGradientRadial(int width, int height, float density, Color *inner, Color *outer, Image *____return) {
  Image ____ret = GenImageGradientRadial(width, height, density, *inner, *outer);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageGradientSquare(int width, int height, float density, Color *inner, Color *outer, Image *____return) {
  Image ____ret = GenImageGradientSquare(width, height, density, *inner, *outer);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale, Image *____return) {
  Image ____ret = GenImagePerlinNoise(width, height, offsetX, offsetY, scale);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageText(int width, int height, const char * text, Image *____return) {
  Image ____ret = GenImageText(width, height, text);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenImageWhiteNoise(int width, int height, float factor, Image *____return) {
  Image ____ret = GenImageWhiteNoise(width, height, factor);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_GenMeshCone(float radius, float height, int slices, Mesh *____return) {
  Mesh ____ret = GenMeshCone(radius, height, slices);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshCube(float width, float height, float length, Mesh *____return) {
  Mesh ____ret = GenMeshCube(width, height, length);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshCubicmap(Image *cubicmap, Vector3 *cubeSize, Mesh *____return) {
  Mesh ____ret = GenMeshCubicmap(*cubicmap, *cubeSize);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshCylinder(float radius, float height, int slices, Mesh *____return) {
  Mesh ____ret = GenMeshCylinder(radius, height, slices);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshHeightmap(Image *heightmap, Vector3 *size, Mesh *____return) {
  Mesh ____ret = GenMeshHeightmap(*heightmap, *size);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshHemiSphere(float radius, int rings, int slices, Mesh *____return) {
  Mesh ____ret = GenMeshHemiSphere(radius, rings, slices);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshKnot(float radius, float size, int radSeg, int sides, Mesh *____return) {
  Mesh ____ret = GenMeshKnot(radius, size, radSeg, sides);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshPlane(float width, float length, int resX, int resZ, Mesh *____return) {
  Mesh ____ret = GenMeshPlane(width, length, resX, resZ);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshPoly(int sides, float radius, Mesh *____return) {
  Mesh ____ret = GenMeshPoly(sides, radius);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshSphere(float radius, int rings, int slices, Mesh *____return) {
  Mesh ____ret = GenMeshSphere(radius, rings, slices);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GenMeshTorus(float radius, float size, int radSeg, int sides, Mesh *____return) {
  Mesh ____ret = GenMeshTorus(radius, size, radSeg, sides);
  memcpy(____return, &____ret, sizeof(Mesh));
}


void __sn_wrap_libraylib_GetCameraMatrix(Camera *camera, Matrix *____return) {
  Matrix ____ret = GetCameraMatrix(*camera);
  memcpy(____return, &____ret, sizeof(Matrix));
}


void __sn_wrap_libraylib_GetCameraMatrix2D(Camera2D *camera, Matrix *____return) {
  Matrix ____ret = GetCameraMatrix2D(*camera);
  memcpy(____return, &____ret, sizeof(Matrix));
}


void __sn_wrap_libraylib_GetCollisionRec(Rectangle *rec1, Rectangle *rec2, Rectangle *____return) {
  Rectangle ____ret = GetCollisionRec(*rec1, *rec2);
  memcpy(____return, &____ret, sizeof(Rectangle));
}


void __sn_wrap_libraylib_GetColor(unsigned int hexValue, Color *____return) {
  Color ____ret = GetColor(hexValue);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_GetFontDefault(Font *____return) {
  Font ____ret = GetFontDefault();
  memcpy(____return, &____ret, sizeof(Font));
}


void __sn_wrap_libraylib_GetGestureDragVector(Vector2 *____return) {
  Vector2 ____ret = GetGestureDragVector();
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetGesturePinchVector(Vector2 *____return) {
  Vector2 ____ret = GetGesturePinchVector();
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetGlyphAtlasRec(Font *font, int codepoint, Rectangle *____return) {
  Rectangle ____ret = GetGlyphAtlasRec(*font, codepoint);
  memcpy(____return, &____ret, sizeof(Rectangle));
}


int __sn_wrap_libraylib_GetGlyphIndex(Font *font, int codepoint) {
 return GetGlyphIndex(*font, codepoint);
};


void __sn_wrap_libraylib_GetGlyphInfo(Font *font, int codepoint, GlyphInfo *____return) {
  GlyphInfo ____ret = GetGlyphInfo(*font, codepoint);
  memcpy(____return, &____ret, sizeof(GlyphInfo));
}


void __sn_wrap_libraylib_GetImageAlphaBorder(Image *image, float threshold, Rectangle *____return) {
  Rectangle ____ret = GetImageAlphaBorder(*image, threshold);
  memcpy(____return, &____ret, sizeof(Rectangle));
}


void __sn_wrap_libraylib_GetImageColor(Image *image, int x, int y, Color *____return) {
  Color ____ret = GetImageColor(*image, x, y);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_GetMeshBoundingBox(Mesh *mesh, BoundingBox *____return) {
  BoundingBox ____ret = GetMeshBoundingBox(*mesh);
  memcpy(____return, &____ret, sizeof(BoundingBox));
}


void __sn_wrap_libraylib_GetModelBoundingBox(Model *model, BoundingBox *____return) {
  BoundingBox ____ret = GetModelBoundingBox(*model);
  memcpy(____return, &____ret, sizeof(BoundingBox));
}


void __sn_wrap_libraylib_GetMonitorPosition(int monitor, Vector2 *____return) {
  Vector2 ____ret = GetMonitorPosition(monitor);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetMouseDelta(Vector2 *____return) {
  Vector2 ____ret = GetMouseDelta();
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetMousePosition(Vector2 *____return) {
  Vector2 ____ret = GetMousePosition();
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetMouseWheelMoveV(Vector2 *____return) {
  Vector2 ____ret = GetMouseWheelMoveV();
  memcpy(____return, &____ret, sizeof(Vector2));
}


float __sn_wrap_libraylib_GetMusicTimeLength(Music *music) {
 return GetMusicTimeLength(*music);
};


float __sn_wrap_libraylib_GetMusicTimePlayed(Music *music) {
 return GetMusicTimePlayed(*music);
};


void __sn_wrap_libraylib_GetPixelColor(void * srcPtr, int format, Color *____return) {
  Color ____ret = GetPixelColor(srcPtr, format);
  memcpy(____return, &____ret, sizeof(Color));
}


void __sn_wrap_libraylib_GetRayCollisionBox(Ray *ray, BoundingBox *box, RayCollision *____return) {
  RayCollision ____ret = GetRayCollisionBox(*ray, *box);
  memcpy(____return, &____ret, sizeof(RayCollision));
}


void __sn_wrap_libraylib_GetRayCollisionMesh(Ray *ray, Mesh *mesh, Matrix *transform, RayCollision *____return) {
  RayCollision ____ret = GetRayCollisionMesh(*ray, *mesh, *transform);
  memcpy(____return, &____ret, sizeof(RayCollision));
}


void __sn_wrap_libraylib_GetRayCollisionQuad(Ray *ray, Vector3 *p1, Vector3 *p2, Vector3 *p3, Vector3 *p4, RayCollision *____return) {
  RayCollision ____ret = GetRayCollisionQuad(*ray, *p1, *p2, *p3, *p4);
  memcpy(____return, &____ret, sizeof(RayCollision));
}


void __sn_wrap_libraylib_GetRayCollisionSphere(Ray *ray, Vector3 *center, float radius, RayCollision *____return) {
  RayCollision ____ret = GetRayCollisionSphere(*ray, *center, radius);
  memcpy(____return, &____ret, sizeof(RayCollision));
}


void __sn_wrap_libraylib_GetRayCollisionTriangle(Ray *ray, Vector3 *p1, Vector3 *p2, Vector3 *p3, RayCollision *____return) {
  RayCollision ____ret = GetRayCollisionTriangle(*ray, *p1, *p2, *p3);
  memcpy(____return, &____ret, sizeof(RayCollision));
}


void __sn_wrap_libraylib_GetScreenToWorld2D(Vector2 *position, Camera2D *camera, Vector2 *____return) {
  Vector2 ____ret = GetScreenToWorld2D(*position, *camera);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetScreenToWorldRay(Vector2 *position, Camera *camera, Ray *____return) {
  Ray ____ret = GetScreenToWorldRay(*position, *camera);
  memcpy(____return, &____ret, sizeof(Ray));
}


void __sn_wrap_libraylib_GetScreenToWorldRayEx(Vector2 *position, Camera *camera, int width, int height, Ray *____return) {
  Ray ____ret = GetScreenToWorldRayEx(*position, *camera, width, height);
  memcpy(____return, &____ret, sizeof(Ray));
}


int __sn_wrap_libraylib_GetShaderLocation(Shader *shader, const char * uniformName) {
 return GetShaderLocation(*shader, uniformName);
};


int __sn_wrap_libraylib_GetShaderLocationAttrib(Shader *shader, const char * attribName) {
 return GetShaderLocationAttrib(*shader, attribName);
};


void __sn_wrap_libraylib_GetShapesTexture(Texture2D *____return) {
  Texture2D ____ret = GetShapesTexture();
  memcpy(____return, &____ret, sizeof(Texture2D));
}


void __sn_wrap_libraylib_GetShapesTextureRectangle(Rectangle *____return) {
  Rectangle ____ret = GetShapesTextureRectangle();
  memcpy(____return, &____ret, sizeof(Rectangle));
}


void __sn_wrap_libraylib_GetSplinePointBasis(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float t, Vector2 *____return) {
  Vector2 ____ret = GetSplinePointBasis(*p1, *p2, *p3, *p4, t);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetSplinePointBezierCubic(Vector2 *p1, Vector2 *c2, Vector2 *c3, Vector2 *p4, float t, Vector2 *____return) {
  Vector2 ____ret = GetSplinePointBezierCubic(*p1, *c2, *c3, *p4, t);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetSplinePointBezierQuad(Vector2 *p1, Vector2 *c2, Vector2 *p3, float t, Vector2 *____return) {
  Vector2 ____ret = GetSplinePointBezierQuad(*p1, *c2, *p3, t);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetSplinePointCatmullRom(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float t, Vector2 *____return) {
  Vector2 ____ret = GetSplinePointCatmullRom(*p1, *p2, *p3, *p4, t);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetSplinePointLinear(Vector2 *startPos, Vector2 *endPos, float t, Vector2 *____return) {
  Vector2 ____ret = GetSplinePointLinear(*startPos, *endPos, t);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetTouchPosition(int index, Vector2 *____return) {
  Vector2 ____ret = GetTouchPosition(index);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetWindowPosition(Vector2 *____return) {
  Vector2 ____ret = GetWindowPosition();
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetWindowScaleDPI(Vector2 *____return) {
  Vector2 ____ret = GetWindowScaleDPI();
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetWorldToScreen(Vector3 *position, Camera *camera, Vector2 *____return) {
  Vector2 ____ret = GetWorldToScreen(*position, *camera);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetWorldToScreen2D(Vector2 *position, Camera2D *camera, Vector2 *____return) {
  Vector2 ____ret = GetWorldToScreen2D(*position, *camera);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_GetWorldToScreenEx(Vector3 *position, Camera *camera, int width, int height, Vector2 *____return) {
  Vector2 ____ret = GetWorldToScreenEx(*position, *camera, width, height);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_ImageAlphaClear(Image * image, Color *color, float threshold) {
 ImageAlphaClear(image, *color, threshold);
};


void __sn_wrap_libraylib_ImageAlphaMask(Image * image, Image *alphaMask) {
 ImageAlphaMask(image, *alphaMask);
};


void __sn_wrap_libraylib_ImageClearBackground(Image * dst, Color *color) {
 ImageClearBackground(dst, *color);
};


void __sn_wrap_libraylib_ImageColorReplace(Image * image, Color *color, Color *replace) {
 ImageColorReplace(image, *color, *replace);
};


void __sn_wrap_libraylib_ImageColorTint(Image * image, Color *color) {
 ImageColorTint(image, *color);
};


void __sn_wrap_libraylib_ImageCopy(Image *image, Image *____return) {
  Image ____ret = ImageCopy(*image);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_ImageCrop(Image * image, Rectangle *crop) {
 ImageCrop(image, *crop);
};


void __sn_wrap_libraylib_ImageDraw(Image * dst, Image *src, Rectangle *srcRec, Rectangle *dstRec, Color *tint) {
 ImageDraw(dst, *src, *srcRec, *dstRec, *tint);
};


void __sn_wrap_libraylib_ImageDrawCircle(Image * dst, int centerX, int centerY, int radius, Color *color) {
 ImageDrawCircle(dst, centerX, centerY, radius, *color);
};


void __sn_wrap_libraylib_ImageDrawCircleLines(Image * dst, int centerX, int centerY, int radius, Color *color) {
 ImageDrawCircleLines(dst, centerX, centerY, radius, *color);
};


void __sn_wrap_libraylib_ImageDrawCircleLinesV(Image * dst, Vector2 *center, int radius, Color *color) {
 ImageDrawCircleLinesV(dst, *center, radius, *color);
};


void __sn_wrap_libraylib_ImageDrawCircleV(Image * dst, Vector2 *center, int radius, Color *color) {
 ImageDrawCircleV(dst, *center, radius, *color);
};


void __sn_wrap_libraylib_ImageDrawLine(Image * dst, int startPosX, int startPosY, int endPosX, int endPosY, Color *color) {
 ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, *color);
};


void __sn_wrap_libraylib_ImageDrawLineEx(Image * dst, Vector2 *start, Vector2 *end, int thick, Color *color) {
 ImageDrawLineEx(dst, *start, *end, thick, *color);
};


void __sn_wrap_libraylib_ImageDrawLineV(Image * dst, Vector2 *start, Vector2 *end, Color *color) {
 ImageDrawLineV(dst, *start, *end, *color);
};


void __sn_wrap_libraylib_ImageDrawPixel(Image * dst, int posX, int posY, Color *color) {
 ImageDrawPixel(dst, posX, posY, *color);
};


void __sn_wrap_libraylib_ImageDrawPixelV(Image * dst, Vector2 *position, Color *color) {
 ImageDrawPixelV(dst, *position, *color);
};


void __sn_wrap_libraylib_ImageDrawRectangle(Image * dst, int posX, int posY, int width, int height, Color *color) {
 ImageDrawRectangle(dst, posX, posY, width, height, *color);
};


void __sn_wrap_libraylib_ImageDrawRectangleLines(Image * dst, Rectangle *rec, int thick, Color *color) {
 ImageDrawRectangleLines(dst, *rec, thick, *color);
};


void __sn_wrap_libraylib_ImageDrawRectangleRec(Image * dst, Rectangle *rec, Color *color) {
 ImageDrawRectangleRec(dst, *rec, *color);
};


void __sn_wrap_libraylib_ImageDrawRectangleV(Image * dst, Vector2 *position, Vector2 *size, Color *color) {
 ImageDrawRectangleV(dst, *position, *size, *color);
};


void __sn_wrap_libraylib_ImageDrawText(Image * dst, const char * text, int posX, int posY, int fontSize, Color *color) {
 ImageDrawText(dst, text, posX, posY, fontSize, *color);
};


void __sn_wrap_libraylib_ImageDrawTextEx(Image * dst, Font *font, const char * text, Vector2 *position, float fontSize, float spacing, Color *tint) {
 ImageDrawTextEx(dst, *font, text, *position, fontSize, spacing, *tint);
};


void __sn_wrap_libraylib_ImageDrawTriangle(Image * dst, Vector2 *v1, Vector2 *v2, Vector2 *v3, Color *color) {
 ImageDrawTriangle(dst, *v1, *v2, *v3, *color);
};


void __sn_wrap_libraylib_ImageDrawTriangleEx(Image * dst, Vector2 *v1, Vector2 *v2, Vector2 *v3, Color *c1, Color *c2, Color *c3) {
 ImageDrawTriangleEx(dst, *v1, *v2, *v3, *c1, *c2, *c3);
};


void __sn_wrap_libraylib_ImageDrawTriangleFan(Image * dst, Vector2 * points, int pointCount, Color *color) {
 ImageDrawTriangleFan(dst, points, pointCount, *color);
};


void __sn_wrap_libraylib_ImageDrawTriangleLines(Image * dst, Vector2 *v1, Vector2 *v2, Vector2 *v3, Color *color) {
 ImageDrawTriangleLines(dst, *v1, *v2, *v3, *color);
};


void __sn_wrap_libraylib_ImageDrawTriangleStrip(Image * dst, Vector2 * points, int pointCount, Color *color) {
 ImageDrawTriangleStrip(dst, points, pointCount, *color);
};


void __sn_wrap_libraylib_ImageFromChannel(Image *image, int selectedChannel, Image *____return) {
  Image ____ret = ImageFromChannel(*image, selectedChannel);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_ImageFromImage(Image *image, Rectangle *rec, Image *____return) {
  Image ____ret = ImageFromImage(*image, *rec);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_ImageResizeCanvas(Image * image, int newWidth, int newHeight, int offsetX, int offsetY, Color *fill) {
 ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, *fill);
};


void __sn_wrap_libraylib_ImageText(const char * text, int fontSize, Color *color, Image *____return) {
  Image ____ret = ImageText(text, fontSize, *color);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_ImageTextEx(Font *font, const char * text, float fontSize, float spacing, Color *tint, Image *____return) {
  Image ____ret = ImageTextEx(*font, text, fontSize, spacing, *tint);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_ImageToPOT(Image * image, Color *fill) {
 ImageToPOT(image, *fill);
};


_Bool __sn_wrap_libraylib_IsAudioStreamPlaying(AudioStream *stream) {
 return IsAudioStreamPlaying(*stream);
};


_Bool __sn_wrap_libraylib_IsAudioStreamProcessed(AudioStream *stream) {
 return IsAudioStreamProcessed(*stream);
};


_Bool __sn_wrap_libraylib_IsAudioStreamReady(AudioStream *stream) {
 return IsAudioStreamReady(*stream);
};


_Bool __sn_wrap_libraylib_IsFontReady(Font *font) {
 return IsFontReady(*font);
};


_Bool __sn_wrap_libraylib_IsImageReady(Image *image) {
 return IsImageReady(*image);
};


_Bool __sn_wrap_libraylib_IsMaterialReady(Material *material) {
 return IsMaterialReady(*material);
};


_Bool __sn_wrap_libraylib_IsModelAnimationValid(Model *model, ModelAnimation *anim) {
 return IsModelAnimationValid(*model, *anim);
};


_Bool __sn_wrap_libraylib_IsModelReady(Model *model) {
 return IsModelReady(*model);
};


_Bool __sn_wrap_libraylib_IsMusicReady(Music *music) {
 return IsMusicReady(*music);
};


_Bool __sn_wrap_libraylib_IsMusicStreamPlaying(Music *music) {
 return IsMusicStreamPlaying(*music);
};


_Bool __sn_wrap_libraylib_IsRenderTextureReady(RenderTexture2D *target) {
 return IsRenderTextureReady(*target);
};


_Bool __sn_wrap_libraylib_IsShaderReady(Shader *shader) {
 return IsShaderReady(*shader);
};


_Bool __sn_wrap_libraylib_IsSoundPlaying(Sound *sound) {
 return IsSoundPlaying(*sound);
};


_Bool __sn_wrap_libraylib_IsSoundReady(Sound *sound) {
 return IsSoundReady(*sound);
};


_Bool __sn_wrap_libraylib_IsTextureReady(Texture2D *texture) {
 return IsTextureReady(*texture);
};


_Bool __sn_wrap_libraylib_IsWaveReady(Wave *wave) {
 return IsWaveReady(*wave);
};


void __sn_wrap_libraylib_LoadAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels, AudioStream *____return) {
  AudioStream ____ret = LoadAudioStream(sampleRate, sampleSize, channels);
  memcpy(____return, &____ret, sizeof(AudioStream));
}


void __sn_wrap_libraylib_LoadAutomationEventList(const char * fileName, AutomationEventList *____return) {
  AutomationEventList ____ret = LoadAutomationEventList(fileName);
  memcpy(____return, &____ret, sizeof(AutomationEventList));
}


void __sn_wrap_libraylib_LoadDirectoryFiles(const char * dirPath, FilePathList *____return) {
  FilePathList ____ret = LoadDirectoryFiles(dirPath);
  memcpy(____return, &____ret, sizeof(FilePathList));
}


void __sn_wrap_libraylib_LoadDirectoryFilesEx(const char * basePath, const char * filter, _Bool scanSubdirs, FilePathList *____return) {
  FilePathList ____ret = LoadDirectoryFilesEx(basePath, filter, scanSubdirs);
  memcpy(____return, &____ret, sizeof(FilePathList));
}


void __sn_wrap_libraylib_LoadDroppedFiles(FilePathList *____return) {
  FilePathList ____ret = LoadDroppedFiles();
  memcpy(____return, &____ret, sizeof(FilePathList));
}


void __sn_wrap_libraylib_LoadFont(const char * fileName, Font *____return) {
  Font ____ret = LoadFont(fileName);
  memcpy(____return, &____ret, sizeof(Font));
}


void __sn_wrap_libraylib_LoadFontEx(const char * fileName, int fontSize, int * codepoints, int codepointCount, Font *____return) {
  Font ____ret = LoadFontEx(fileName, fontSize, codepoints, codepointCount);
  memcpy(____return, &____ret, sizeof(Font));
}


void __sn_wrap_libraylib_LoadFontFromImage(Image *image, Color *key, int firstChar, Font *____return) {
  Font ____ret = LoadFontFromImage(*image, *key, firstChar);
  memcpy(____return, &____ret, sizeof(Font));
}


void __sn_wrap_libraylib_LoadFontFromMemory(const char * fileType, const unsigned char * fileData, int dataSize, int fontSize, int * codepoints, int codepointCount, Font *____return) {
  Font ____ret = LoadFontFromMemory(fileType, fileData, dataSize, fontSize, codepoints, codepointCount);
  memcpy(____return, &____ret, sizeof(Font));
}


void __sn_wrap_libraylib_LoadImage(const char * fileName, Image *____return) {
  Image ____ret = LoadImage(fileName);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_LoadImageAnim(const char * fileName, int * frames, Image *____return) {
  Image ____ret = LoadImageAnim(fileName, frames);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_LoadImageAnimFromMemory(const char * fileType, const unsigned char * fileData, int dataSize, int * frames, Image *____return) {
  Image ____ret = LoadImageAnimFromMemory(fileType, fileData, dataSize, frames);
  memcpy(____return, &____ret, sizeof(Image));
}


Color * __sn_wrap_libraylib_LoadImageColors(Image *image) {
 return LoadImageColors(*image);
};


void __sn_wrap_libraylib_LoadImageFromMemory(const char * fileType, const unsigned char * fileData, int dataSize, Image *____return) {
  Image ____ret = LoadImageFromMemory(fileType, fileData, dataSize);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_LoadImageFromScreen(Image *____return) {
  Image ____ret = LoadImageFromScreen();
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_LoadImageFromTexture(Texture2D *texture, Image *____return) {
  Image ____ret = LoadImageFromTexture(*texture);
  memcpy(____return, &____ret, sizeof(Image));
}


Color * __sn_wrap_libraylib_LoadImagePalette(Image *image, int maxPaletteSize, int * colorCount) {
 return LoadImagePalette(*image, maxPaletteSize, colorCount);
};


void __sn_wrap_libraylib_LoadImageRaw(const char * fileName, int width, int height, int format, int headerSize, Image *____return) {
  Image ____ret = LoadImageRaw(fileName, width, height, format, headerSize);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_LoadImageSvg(const char * fileNameOrString, int width, int height, Image *____return) {
  Image ____ret = LoadImageSvg(fileNameOrString, width, height);
  memcpy(____return, &____ret, sizeof(Image));
}


void __sn_wrap_libraylib_LoadMaterialDefault(Material *____return) {
  Material ____ret = LoadMaterialDefault();
  memcpy(____return, &____ret, sizeof(Material));
}


void __sn_wrap_libraylib_LoadModel(const char * fileName, Model *____return) {
  Model ____ret = LoadModel(fileName);
  memcpy(____return, &____ret, sizeof(Model));
}


void __sn_wrap_libraylib_LoadModelFromMesh(Mesh *mesh, Model *____return) {
  Model ____ret = LoadModelFromMesh(*mesh);
  memcpy(____return, &____ret, sizeof(Model));
}


void __sn_wrap_libraylib_LoadMusicStream(const char * fileName, Music *____return) {
  Music ____ret = LoadMusicStream(fileName);
  memcpy(____return, &____ret, sizeof(Music));
}


void __sn_wrap_libraylib_LoadMusicStreamFromMemory(const char * fileType, const unsigned char * data, int dataSize, Music *____return) {
  Music ____ret = LoadMusicStreamFromMemory(fileType, data, dataSize);
  memcpy(____return, &____ret, sizeof(Music));
}


void __sn_wrap_libraylib_LoadRenderTexture(int width, int height, RenderTexture2D *____return) {
  RenderTexture2D ____ret = LoadRenderTexture(width, height);
  memcpy(____return, &____ret, sizeof(RenderTexture2D));
}


void __sn_wrap_libraylib_LoadShader(const char * vsFileName, const char * fsFileName, Shader *____return) {
  Shader ____ret = LoadShader(vsFileName, fsFileName);
  memcpy(____return, &____ret, sizeof(Shader));
}


void __sn_wrap_libraylib_LoadShaderFromMemory(const char * vsCode, const char * fsCode, Shader *____return) {
  Shader ____ret = LoadShaderFromMemory(vsCode, fsCode);
  memcpy(____return, &____ret, sizeof(Shader));
}


void __sn_wrap_libraylib_LoadSound(const char * fileName, Sound *____return) {
  Sound ____ret = LoadSound(fileName);
  memcpy(____return, &____ret, sizeof(Sound));
}


void __sn_wrap_libraylib_LoadSoundAlias(Sound *source, Sound *____return) {
  Sound ____ret = LoadSoundAlias(*source);
  memcpy(____return, &____ret, sizeof(Sound));
}


void __sn_wrap_libraylib_LoadSoundFromWave(Wave *wave, Sound *____return) {
  Sound ____ret = LoadSoundFromWave(*wave);
  memcpy(____return, &____ret, sizeof(Sound));
}


void __sn_wrap_libraylib_LoadTexture(const char * fileName, Texture2D *____return) {
  Texture2D ____ret = LoadTexture(fileName);
  memcpy(____return, &____ret, sizeof(Texture2D));
}


void __sn_wrap_libraylib_LoadTextureCubemap(Image *image, int layout, TextureCubemap *____return) {
  TextureCubemap ____ret = LoadTextureCubemap(*image, layout);
  memcpy(____return, &____ret, sizeof(TextureCubemap));
}


void __sn_wrap_libraylib_LoadTextureFromImage(Image *image, Texture2D *____return) {
  Texture2D ____ret = LoadTextureFromImage(*image);
  memcpy(____return, &____ret, sizeof(Texture2D));
}


void __sn_wrap_libraylib_LoadVrStereoConfig(VrDeviceInfo *device, VrStereoConfig *____return) {
  VrStereoConfig ____ret = LoadVrStereoConfig(*device);
  memcpy(____return, &____ret, sizeof(VrStereoConfig));
}


void __sn_wrap_libraylib_LoadWave(const char * fileName, Wave *____return) {
  Wave ____ret = LoadWave(fileName);
  memcpy(____return, &____ret, sizeof(Wave));
}


void __sn_wrap_libraylib_LoadWaveFromMemory(const char * fileType, const unsigned char * fileData, int dataSize, Wave *____return) {
  Wave ____ret = LoadWaveFromMemory(fileType, fileData, dataSize);
  memcpy(____return, &____ret, sizeof(Wave));
}


float * __sn_wrap_libraylib_LoadWaveSamples(Wave *wave) {
 return LoadWaveSamples(*wave);
};


void __sn_wrap_libraylib_MeasureTextEx(Font *font, const char * text, float fontSize, float spacing, Vector2 *____return) {
  Vector2 ____ret = MeasureTextEx(*font, text, fontSize, spacing);
  memcpy(____return, &____ret, sizeof(Vector2));
}


void __sn_wrap_libraylib_PauseAudioStream(AudioStream *stream) {
 PauseAudioStream(*stream);
};


void __sn_wrap_libraylib_PauseMusicStream(Music *music) {
 PauseMusicStream(*music);
};


void __sn_wrap_libraylib_PauseSound(Sound *sound) {
 PauseSound(*sound);
};


void __sn_wrap_libraylib_PlayAudioStream(AudioStream *stream) {
 PlayAudioStream(*stream);
};


void __sn_wrap_libraylib_PlayAutomationEvent(AutomationEvent *event) {
 PlayAutomationEvent(*event);
};


void __sn_wrap_libraylib_PlayMusicStream(Music *music) {
 PlayMusicStream(*music);
};


void __sn_wrap_libraylib_PlaySound(Sound *sound) {
 PlaySound(*sound);
};


void __sn_wrap_libraylib_ResumeAudioStream(AudioStream *stream) {
 ResumeAudioStream(*stream);
};


void __sn_wrap_libraylib_ResumeMusicStream(Music *music) {
 ResumeMusicStream(*music);
};


void __sn_wrap_libraylib_ResumeSound(Sound *sound) {
 ResumeSound(*sound);
};


void __sn_wrap_libraylib_SeekMusicStream(Music *music, float position) {
 SeekMusicStream(*music, position);
};


void __sn_wrap_libraylib_SetAudioStreamCallback(AudioStream *stream, AudioCallback callback) {
 SetAudioStreamCallback(*stream, callback);
};


void __sn_wrap_libraylib_SetAudioStreamPan(AudioStream *stream, float pan) {
 SetAudioStreamPan(*stream, pan);
};


void __sn_wrap_libraylib_SetAudioStreamPitch(AudioStream *stream, float pitch) {
 SetAudioStreamPitch(*stream, pitch);
};


void __sn_wrap_libraylib_SetAudioStreamVolume(AudioStream *stream, float volume) {
 SetAudioStreamVolume(*stream, volume);
};


void __sn_wrap_libraylib_SetMaterialTexture(Material * material, int mapType, Texture2D *texture) {
 SetMaterialTexture(material, mapType, *texture);
};


void __sn_wrap_libraylib_SetMusicPan(Music *music, float pan) {
 SetMusicPan(*music, pan);
};


void __sn_wrap_libraylib_SetMusicPitch(Music *music, float pitch) {
 SetMusicPitch(*music, pitch);
};


void __sn_wrap_libraylib_SetMusicVolume(Music *music, float volume) {
 SetMusicVolume(*music, volume);
};


void __sn_wrap_libraylib_SetPixelColor(void * dstPtr, Color *color, int format) {
 SetPixelColor(dstPtr, *color, format);
};


void __sn_wrap_libraylib_SetShaderValue(Shader *shader, int locIndex, const void * value, int uniformType) {
 SetShaderValue(*shader, locIndex, value, uniformType);
};


void __sn_wrap_libraylib_SetShaderValueMatrix(Shader *shader, int locIndex, Matrix *mat) {
 SetShaderValueMatrix(*shader, locIndex, *mat);
};


void __sn_wrap_libraylib_SetShaderValueTexture(Shader *shader, int locIndex, Texture2D *texture) {
 SetShaderValueTexture(*shader, locIndex, *texture);
};


void __sn_wrap_libraylib_SetShaderValueV(Shader *shader, int locIndex, const void * value, int uniformType, int count) {
 SetShaderValueV(*shader, locIndex, value, uniformType, count);
};


void __sn_wrap_libraylib_SetShapesTexture(Texture2D *texture, Rectangle *source) {
 SetShapesTexture(*texture, *source);
};


void __sn_wrap_libraylib_SetSoundPan(Sound *sound, float pan) {
 SetSoundPan(*sound, pan);
};


void __sn_wrap_libraylib_SetSoundPitch(Sound *sound, float pitch) {
 SetSoundPitch(*sound, pitch);
};


void __sn_wrap_libraylib_SetSoundVolume(Sound *sound, float volume) {
 SetSoundVolume(*sound, volume);
};


void __sn_wrap_libraylib_SetTextureFilter(Texture2D *texture, int filter) {
 SetTextureFilter(*texture, filter);
};


void __sn_wrap_libraylib_SetTextureWrap(Texture2D *texture, int wrap) {
 SetTextureWrap(*texture, wrap);
};


void __sn_wrap_libraylib_SetWindowIcon(Image *image) {
 SetWindowIcon(*image);
};


void __sn_wrap_libraylib_StopAudioStream(AudioStream *stream) {
 StopAudioStream(*stream);
};


void __sn_wrap_libraylib_StopMusicStream(Music *music) {
 StopMusicStream(*music);
};


void __sn_wrap_libraylib_StopSound(Sound *sound) {
 StopSound(*sound);
};


void __sn_wrap_libraylib_UnloadAudioStream(AudioStream *stream) {
 UnloadAudioStream(*stream);
};


void __sn_wrap_libraylib_UnloadAutomationEventList(AutomationEventList *list) {
 UnloadAutomationEventList(*list);
};


void __sn_wrap_libraylib_UnloadDirectoryFiles(FilePathList *files) {
 UnloadDirectoryFiles(*files);
};


void __sn_wrap_libraylib_UnloadDroppedFiles(FilePathList *files) {
 UnloadDroppedFiles(*files);
};


void __sn_wrap_libraylib_UnloadFont(Font *font) {
 UnloadFont(*font);
};


void __sn_wrap_libraylib_UnloadImage(Image *image) {
 UnloadImage(*image);
};


void __sn_wrap_libraylib_UnloadMaterial(Material *material) {
 UnloadMaterial(*material);
};


void __sn_wrap_libraylib_UnloadMesh(Mesh *mesh) {
 UnloadMesh(*mesh);
};


void __sn_wrap_libraylib_UnloadModel(Model *model) {
 UnloadModel(*model);
};


void __sn_wrap_libraylib_UnloadModelAnimation(ModelAnimation *anim) {
 UnloadModelAnimation(*anim);
};


void __sn_wrap_libraylib_UnloadMusicStream(Music *music) {
 UnloadMusicStream(*music);
};


void __sn_wrap_libraylib_UnloadRenderTexture(RenderTexture2D *target) {
 UnloadRenderTexture(*target);
};


void __sn_wrap_libraylib_UnloadShader(Shader *shader) {
 UnloadShader(*shader);
};


void __sn_wrap_libraylib_UnloadSound(Sound *sound) {
 UnloadSound(*sound);
};


void __sn_wrap_libraylib_UnloadSoundAlias(Sound *alias) {
 UnloadSoundAlias(*alias);
};


void __sn_wrap_libraylib_UnloadTexture(Texture2D *texture) {
 UnloadTexture(*texture);
};


void __sn_wrap_libraylib_UnloadVrStereoConfig(VrStereoConfig *config) {
 UnloadVrStereoConfig(*config);
};


void __sn_wrap_libraylib_UnloadWave(Wave *wave) {
 UnloadWave(*wave);
};


void __sn_wrap_libraylib_UpdateAudioStream(AudioStream *stream, const void * data, int frameCount) {
 UpdateAudioStream(*stream, data, frameCount);
};


void __sn_wrap_libraylib_UpdateCameraPro(Camera * camera, Vector3 *movement, Vector3 *rotation, float zoom) {
 UpdateCameraPro(camera, *movement, *rotation, zoom);
};


void __sn_wrap_libraylib_UpdateMeshBuffer(Mesh *mesh, int index, const void * data, int dataSize, int offset) {
 UpdateMeshBuffer(*mesh, index, data, dataSize, offset);
};


void __sn_wrap_libraylib_UpdateModelAnimation(Model *model, ModelAnimation *anim, int frame) {
 UpdateModelAnimation(*model, *anim, frame);
};


void __sn_wrap_libraylib_UpdateMusicStream(Music *music) {
 UpdateMusicStream(*music);
};


void __sn_wrap_libraylib_UpdateSound(Sound *sound, const void * data, int sampleCount) {
 UpdateSound(*sound, data, sampleCount);
};


void __sn_wrap_libraylib_UpdateTexture(Texture2D *texture, const void * pixels) {
 UpdateTexture(*texture, pixels);
};


void __sn_wrap_libraylib_UpdateTextureRec(Texture2D *texture, Rectangle *rec, const void * pixels) {
 UpdateTextureRec(*texture, *rec, pixels);
};


void __sn_wrap_libraylib_WaveCopy(Wave *wave, Wave *____return) {
  Wave ____ret = WaveCopy(*wave);
  memcpy(____return, &____ret, sizeof(Wave));
}