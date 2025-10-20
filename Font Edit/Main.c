#include "raylib.h"
#include <stdio.h>
#include <unistd.h>

void textCentered(Font font, const char *text, Vector2 position, float size, float spacing, Color color);
void changestyle( const char *text, int n );

int main(void)
{
	SetConfigFlags(FLAG_MSAA_4X_HINT);
	InitWindow(600, 600, "Umm...");

	int jump, randValue,
		fontCount, anotherRand,
		fontSpacing, fontSize,
		fontQuality = 180;

	Vector2 center = {600/2, 600/2};

	char *inputText = "Made By Censera" ;

	Font fonts[] = {
		LoadFontEx("Fonts/ATLASMEMO.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Ragtonea.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/GhoulStain.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/JVMIYOPROregular.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/XCRobot.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/StrangeMarks-Regular.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/LoveLight-Regular.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Royalty Free.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/CoralPixels-Regular.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/NordminneScript_PERSONAL_USE_ONLY.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Montserrat-Regular.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Helvetica Punk.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/BMEuljirooraeorae.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Starborn.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Darks_Calibri_Remix.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/helvetica-destru-pix.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Acidic.TTF", fontQuality, 0, 0),
		LoadFontEx("Fonts/Another Danger - Demo.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Ape Shit .ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/AURORA-PRO.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/BLASTIMO SANS.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Blastimo Swash.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Blastimo.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Bleeding_Cowboys.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Block Buster.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/bloodcrow.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Bradstone-Parker Script Limited Free Version.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Break.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/CALIFORNIA PERSONAL USE.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/DOCALLISME ON STREET.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/DRUNKFONTS-Regular.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/KGHAPPY.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/KGHAPPYShadows.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/KGHAPPYSolid.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/kindergarten.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Lamoric Rowen TTF.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/LEDLIGHT.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Lostar.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Loverine.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/LowerResolution.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/MagazineLetterByBrntlbrnl-Regular.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/MAROLA__.TTF", fontQuality, 0, 0),
		LoadFontEx("Fonts/MickeyMouse_PERSONAL_USE_ONLY.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/MickeyMouseLine_PERSONAL_USE_ONLY.otf", fontQuality, 0, 0),
		LoadFontEx("Fonts/OldLondon.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/ORGANICAL PERSONAL USE.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Panic.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/Protest Demo.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/PUNKBABE TRIAL.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/RobloxFont-Regular.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/ROMANTIC.TTF", fontQuality, 0, 0),
		LoadFontEx("Fonts/ThinFourDownThreeCrazyPink-Zero.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/VCR_OSD_MONO_1.001.ttf", fontQuality, 0, 0),
		LoadFontEx("Fonts/WorkforceCombine_PERSONAL_USE_ONLY.otf", fontQuality, 0, 0),

	};

	fontSpacing = 1;
	fontSize = 60;

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		randValue = GetRandomValue(0,16);
		anotherRand = GetRandomValue(0,2);
		if (jump == randValue) randValue++;
		fontCount = sizeof(fonts) / sizeof(fonts[0]);
		randValue = GetRandomValue(0, fontCount - 1);
		textCentered(fonts[randValue], inputText, center, fontSize, fontSpacing, RAYWHITE);
		changestyle( inputText, anotherRand );
		jump = randValue;
		EndDrawing();

		usleep(100000);
	}
	CloseWindow();
	return 0;
}

void changestyle( const char *text, int n )
{
	switch (n)
	{
		case 0: TextToUpper( text ); break;
		case 1: TextToLower( text ); break;
		case 2: break;
	}
}


void textCentered(Font font, const char *text, Vector2 position, float size, float spacing, Color color)
{
	Vector2 textVector2 = MeasureTextEx(font, text, size, spacing);
	Vector2 centerPosition =
	{
		.x = position.x - (textVector2.x/2),
		.y = position.y - (textVector2.y/2)
	};
	DrawTextEx(font, text, centerPosition, size, spacing, color);
}
