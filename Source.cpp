#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
/*
CHATGPT - Give me a simple program to make with the C++ Console, Without giving me the code and it can not be a calculator.

CHATGPT:
Got it!

Here's a simple C++ console-based program idea (not a calculator):

Program Idea: Number Guessing Game
The program randomly selects a number between 1 and 100, and the user tries to guess it. After each guess, the program gives a hint: "Too high" or "Too low" until the user guesses correctly.

Would you like the code for this one? Or would you prefer a different idea?
*/

void text(std::string texter);

void textel(std::string texterr);
std::string input;
int number = 0;
int number2 = 0;
int number3 = 0;
int main()
{
	textel("SAW: Do you want to play a game?");
	std::cout << "Y/N:";
	std::cin >> input;
	if (input == "N")
	{
		textel("SAW: I don't care. I Want to play the game...");
	}
	else if (input == "Y")
	{
		textel("SAW: Good.... you had no choice anyways...");
	}	if (input == "n")
	{
		textel("SAW: I don't care. I Want to play the game...");
	}
	else if (input == "y")
	{
		textel("SAW: Good.... you had no choice anyways...");
	}

	Sleep(1500);

	textel("SAW: In this game you will guess a number between 1 and 15.");
	Sleep(1300);
	textel("SAW: You will recieve 3 guesses. Each guess you will lose a bodypart of my choice.");
	Sleep(1300);
	textel("SAW: If you fail to answer correctly within 3 guesses... YOU DIE.");

	textel("\n\n\nSAW: Now tell me... What number am i thinking of?");
	std::cin >> number;

	if (number != 5)
	{
		Sleep(900);
		text("SAW: Congratulations!!");
		Sleep(200);
		text(" You");
		Sleep(200);
		text(" Are");
		Sleep(200);
		text("e");
		Sleep(200);
		text("e");
		Sleep(200);
		text("e");
		textel(" INCORRECT.");
		textel("Player internal monologue: Oh my gosh... I've lost an arm..");


		if (number < 5)
		{
			textel("pssst! Heres a hint you are: Too low.");
			goto num2;
		}
		if (number > 5)
		{
			textel("pssst! Heres a hint you are: Too high.");
			goto num2;
		}
	}

	else {
		goto end;
		text("You live to see another day... Vermin.");
	}
num2:
	textel("SAW: Try your luck again... Peasent.");
	std::cin >> number2;
	if (number2 != 5)
	{
		Sleep(900);
		text("Congratulations!!");
		Sleep(200);
		text(" You");
		Sleep(200);
		text(" Are");
		Sleep(200);
		text("e");
		Sleep(200);
		text("e");
		Sleep(200);
		text("e");
		textel(" INCORRECT.");
		textel("Player internal monologue: Oh my gosh... I've lost an arm and a leg...");


		if (number2 < 5)
		{
			textel("pssst! Heres a hint you are: Too low.");
			goto num3;
		}
		if (number2 > 5)
		{
			textel("pssst! Heres a hint you are: Too high.");
			goto num3;
		}
	}
	else {
		textel("You live to see another day... Vermin.");
		goto end;
	}

num3:
	textel("SAW: Last try... Make it count... Peon.");
	std::cin >> number3;
	if (number3 != 5)
	{
		Sleep(900);
		text("Congratulations!!");
		Sleep(200);
		text(" You");
		Sleep(200);
		text(" Are");
		Sleep(200);
		text("e");
		Sleep(200);
		text("e");
		Sleep(200);
		text("e");
		textel(" INCORRECT.");
		textel("Player internal monologue: Oh my gosh... I've lost an arm, a leg, and MY HEAD.....");


		if (number3 != 5)
		{
			textel("\nSAW: Even with help you still died.... Embarassing.");
		}

	}
	else {
		textel("You live to see another day... Vermin.");
	}

end:
	std::cout << "Type anything or click the X in the top right to exit the game.";
	std::cin.get();
}
