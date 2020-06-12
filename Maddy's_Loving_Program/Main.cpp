
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define max 1000

void q1(), q2(), q3(), q4(), q5(), pressentertocontinue(), questionset();
int Q1I = 0, Q2I = 0, Q3I = 0, Q4I = 0, isLeapYear(int year, int mon);

int main()
{
	char input[max], * entry;

	printf("I love writing; however, the time I find myself loving it the most, is when it's for you.\n\n");
	printf("Press ENTER to continue your loving program.");
	pressentertocontinue();
	printf("The Maddy's Notes and Favorites list I wrote for you ensures that I never forget the things in life that make you happy.");
	pressentertocontinue();
	printf("The PIQ essay I wrote for you organizes the joys you've brought into my life, all to argue that I'm lucky to be yours.");
	pressentertocontinue();
	printf("The HIMYM monologue I wrote out for you emphasizes that I will always try to show interest in your interests (keyword: 'try,' given I haven't watched it since).");
	pressentertocontinue();
	printf("The Apology letter I wrote for you says how sorry I am for the past and future mistakes I'll make but promises that I will always apologize and make up for them.");
	pressentertocontinue();
	printf("The Birthday Surprise schedule I wrote for you reminds you of all the people that love you so much and how thankful I am that you were born.");
	pressentertocontinue();
	printf("The gift scripts I write for you show that I will always put thought into anything regarding you, even if it's just to hand you a present.");
	pressentertocontinue();
	printf("The poems I write for you (quite possibly my favorite method) capture the feelings I have for you, stored in words on paper.");
	pressentertocontinue();
	printf("What I've yet to do and quite possibly what anyone in the world has yet to do, to show their love for their girlfriend, is write a program that symbolizes the work \nand creativity I'll always put into making sure you're the happiest girlfriend of a coding nerd in the world. And with loads of literary pieces for you under my belt, \nI now give you the hardest 'super-extra-Jono' piece I've yet to write for you.\n\n");
	printf("Press ENTER to continue your loving program.");
	pressentertocontinue();
	printf("So I thought to myself... what better way to woo my girl with my coding skills than to create an interactive program that asks her questions about us?\n\n");
	printf("Press ENTER to continue your loving program and liven things up a lil bit...");
	pressentertocontinue();
	system("color 5E");

	do
	{
		questionset();
	start: do
	{
		printf("Please enter a valid question number or press 0 to exit: ");
		gets_s(input, max);
	} while (!(strlen(input) == 1));
	entry = input;

	switch (*entry)
	{
	case '0': printf("\nTHERE'S NO ESCAPE! MWAHAHAHAHAHAHAHAHA! >:)\n\n"); goto start; break;
	case '1': q1(); break;
	case '2': q2(); break;
	case '3': q3(); break;
	case '4': q4(); break;
	case '5': q5(); break;
	default: goto start;
	}
	printf("\nPress ENTER to answer another question.");
	pressentertocontinue();
	} while (1);
	_getch();
	return 0;
}

void pressentertocontinue()
{
	char enter = 0;

	printf("\n");
	while (enter != '\r' && enter != '\n')
	{
		enter = getchar();
	}
}

void questionset()
{
	printf("Question 1: Let's start this doozie off with an easy question. ^_^\n\n");
	printf("Question 2: This is straight up fun and cute like you. ;)\n\n");
	printf("Question 3: Don't be fooled by this question. It's to make up for the first one. XD\n\n");
	printf("Question 4: It's a bit of a game so it will take a lil longer. :)\n\n");
	printf("Question 5: Be careful: this concludes Maddy's Loving Program so do it LAST.\n\n");
}

void q1()
{
	char input[max];

	printf("\nPress ENTER to continue with question 1.");
	pressentertocontinue();
	printf("Question 1: When is our anniversary?\n\n");
	do
	{
		printf("Please enter a valid date (mm/dd/yyyy) or press 0 to exit and answer another question: ");
		gets_s(input, max);
		if (!strcmp(input, "07/07/2017"))
		{
			Q1I = 1;
			printf("\nDing! Ding! Ding! HAHAHA. Sorry, for messing with you but just remember that I love youuuu.\n");
			break;
		}
		else if (!strcmp(input, "07/08/2017"))
		{
			printf("\nHint: Are you sure? That's not what my guitar pick says. LOL.\n\n");
		}
		else if (!strcmp(input, "0"))
		{
			goto exit;
		}
	} while (1);
exit:;
}

void q2()
{
	char* entry, input[max];
	int size, flag = 0, i, j;

	printf("\nPress ENTER to continue with question 2.\n");
	do
	{
		while (fgets(input, max, stdin))
		{
			if (flag == 0)
			{
				printf("Question 2: I'll never know how big my heart is since you have it, so could you at least give me an estimate of it?\n\n");
				flag = 1;
			}
			size = strtol(input, &entry, 10);
			if (entry == input || *entry != '\n')
			{
				printf("Please enter a numerical measurement of Jono's heart or press 0 to exit and answer another question: ");
				continue;
			}
			else
			{
				break;
			}
		}
		if (size == 0)
		{
			if (Q2I == 1)
			{

				goto end;
			}
			else
			{
				goto exit;
			}
		}
		if (size < 0 || size > 111)
		{
			printf("\nHint: There's no way my heart is that big so make it 111 or less (that's the screen's capacity). You'll see why. HEHE.\n\n");
			printf("Please enter a numerical measurement of Jono's heart or press 0 to exit and answer another question: ");
			continue;
		}

		printf("\n");
		for (i = size / 2; i <= size; i += 2)
		{
			for (j = 1; j < size - i; j += 2)
			{
				printf(" ");
			}
			for (j = 1; j <= i; j++)
			{
				printf("*");
			}
			for (j = 1; j <= size - i; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = size; i >= 1; i--)
		{
			for (j = i; j < size; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= (i * 2) - 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}

		Q2I = 1;
		printf("\nI think you get the idea of this \"question\" so go ahead and try some more numbers if you'd like.\n\n");
		printf("Please enter a numerical measurement of Jono's heart or press 0 to exit and answer another question: ");
	} while (1);
end: printf("\nI hope you had fun pulling at my heart strings. TEEHEE.\n");
exit:;
}

int isLeapYear(int year, int mon)
{
	int flag = 0;

	if (year % 100 == 0)
	{
		if (year % 400 == 0)
		{
			if (mon == 2)
			{
				flag = 1;
			}
		}
	}
	else if (year % 4 == 0)
	{
		if (mon == 2)
		{
			flag = 1;
		}
	}
	return (flag);
}

void q3()
{
#pragma warning(disable : 4996)

	char input[max];
	int DaysInMon[] = { 31, 28, 31, 30, 31, 30,
					   31, 31, 30, 31, 30, 31 };
	int d1, m1, y1;
	time_t ts;
	struct tm* ct;

	printf("\nPress ENTER to continue with question 3.");
	pressentertocontinue();
	printf("Question 3: When did I become the luckiest man alive?\n\n");
	do
	{
		printf("Please enter a valid date (mm/dd/yyyy) or press 0 to exit and answer another question: ");
		gets_s(input, max);
		if (!strcmp(input, "07/08/2017"))
		{
			m1 = 7, d1 = 8, y1 = 2017;
			break;
		}
		else if (!strcmp(input, "07/07/2017"))
		{
			printf("\nHint: Okay this time I mean our real anniversary. LMAO.\n\n");
		}
		else if (!strcmp(input, "0"))
		{
			goto exit;
		}
	} while (1);

	ts = time(NULL);
	ct = localtime(&ts);

	d1 = DaysInMon[m1 - 1] - d1 + 1;

	if (isLeapYear(y1, m1))
	{
		d1 = d1 + 1;
	}

	d1 = d1 + ct->tm_mday;
	m1 = (12 - m1) + (ct->tm_mon);
	y1 = (ct->tm_year + 1900) - y1 - 1;

	if (isLeapYear((ct->tm_year + 1900), (ct->tm_mon + 1)))
	{
		if (d1 >= (DaysInMon[ct->tm_mon] + 1))
		{
			d1 = d1 - (DaysInMon[ct->tm_mon] + 1);
			m1 = m1 + 1;
		}
	}
	else if (d1 >= DaysInMon[ct->tm_mon])
	{
		d1 = d1 - (DaysInMon[ct->tm_mon]);
		m1 = m1 + 1;
	}
	if (m1 >= 12)
	{
		y1 = y1 + 1;
		m1 = m1 - 12;
	}

	Q3I = 1;
	printf("\nYou know it! But if you want to know exactly how long I've been the luckiest man alive...\n\n");
	printf("Press ENTER to see the answer.");
	pressentertocontinue();
	printf("%d year(s),\n", y1);
	printf("%d month(s),\n", m1);
	printf("and %d day(s).\n", d1);
	printf("\n...and I wouldn't trade a moment of it.\n");
exit:;
}

void q4()
{
	constexpr auto size = 13;

	int i, flag, a = 6, t = 0, MI = 0, AI = 0, DI = 0, II = 0, SI = 0, OI = 0, NI = 0, CI = 0, EI = 0, RI = 0, WI = 0, TI = 0, KI = 0;
	char input[max], * entry, h, b, la, ra, ll, rl, M_ = '_', A_ = '_', D_ = '_', I_ = '_', S_ = '_', O_ = '_', N_ = '_', C_ = '_', E_ = '_', R_ = '_', W_ = '_', T_ = '_', K_ = '_';

	typedef struct hername
	{
		char Answer[max];
		char Response[max];
	}
	tuple;

	tuple list[size] =
	{
		{"M", "my one and only"},
		{"A", "an amazing person"},
		{"D", "doing loads of hard work everyday"},
		{"I", "imagining the most beautiful girl you've seen"},
		{"S", "such a bright person"},
		{"O", "oh my gaw she gorgeous"},
		{"N", "never backing down from what's right"},
		{"C", "calling out the wrongs she sees"},
		{"E", "everyone who knows her is lucky to do so"},
		{"R", "realizing that I'm in the presence of a goddess"},
		{"W", "work it gurl"},
		{"T", "telling me that she love and supports me"},
		{"K", "kisses that make my heart skip a beat"},
	};

	printf("\nPress ENTER to continue with question 4.");
	pressentertocontinue();
	printf("Are you ready for some HANGMAN?!\n\n");

	do
	{
		flag = 0;
		switch (a)
		{
		case 6: h = ' ', b = ' ', la = ' ', ra = ' ', ll = ' ', rl = ' '; break;
		case 5: h = 'O', b = ' ', la = ' ', ra = ' ', ll = ' ', rl = ' '; break;
		case 4: h = 'O', b = '|', la = ' ', ra = ' ', ll = ' ', rl = ' '; break;
		case 3: h = 'O', b = '|', la = '/', ra = ' ', ll = ' ', rl = ' '; break;
		case 2: h = 'O', b = '|', la = '/', ra = '\\', ll = ' ', rl = ' '; break;
		case 1: h = 'O', b = '|', la = '/', ra = '\\', ll = '/', rl = ' '; break;
		case 0: h = 'O', b = '|', la = '/', ra = '\\', ll = '/', rl = '\\'; break;
		}
		printf(" %c    Turns passed: %d", h, t);
		printf("\n%c%c%c   Attempts Left: %d", la, b, ra, a);
		printf("\n%c %c   %c %c %c %c %c %c %c   %c %c %c %c %c %c   %c %c %c %c %c %c %c\n\n", ll, rl, M_, A_, D_, I_, S_, O_, N_, C_, I_, E_, R_, R_, A_, W_, A_, T_, K_, I_, N_, S_);

		if (a == 0)
		{
			printf("GAME OVER.\n");
			goto exit;
		}

		printf("Please enter a capital letter or press 0 to exit and answer another question: ");
		gets_s(input, max);

		for (i = 0; i < size; i++)
		{
			if (!strcmp(input, list[i].Answer))
			{
				printf("\nHint: \"%s\" stands for \"%s.\"\n\n", list[i].Answer, list[i].Response);
				entry = list[i].Answer;
				switch (*entry)
				{
				case 'M': MI++; M_ = 'M'; break;
				case 'A': AI++; A_ = 'A'; break;
				case 'D': DI++; D_ = 'D'; break;
				case 'I': II++; I_ = 'I'; break;
				case 'S': SI++; S_ = 'S'; break;
				case 'O': OI++; O_ = 'O'; break;
				case 'N': NI++; N_ = 'N'; break;
				case 'C': CI++; C_ = 'C'; break;
				case 'E': EI++; E_ = 'E'; break;
				case 'R': RI++; R_ = 'R'; break;
				case 'W': WI++; W_ = 'W'; break;
				case 'T': TI++; T_ = 'T'; break;
				case 'K': KI++; K_ = 'K'; break;
				}
				flag = 1;
			}
			else if (!strcmp(input, "0"))
			{
				goto exit;
			}
		}
		if (flag == 0)
		{
			printf("\nOOF. That's not in there love.\n\n");
			a--;
		}
		t++;
		if (MI > 0 && AI > 0 && DI > 0 && II > 0 && SI > 0 && OI > 0 && NI > 0 && CI > 0 && EI > 0 && RI > 0 && WI > 0 && TI > 0 && KI > 0)
		{
			Q4I = 1;
			printf(" %c    Turns passed: %d", h, t);
			printf("\n%c%c%c   Attempts Left: %d", la, b, ra, a);
			printf("\n%c %c   %c %c %c %c %c %c %c   %c %c %c %c %c %c   %c %c %c %c %c %c %c\n\n", ll, rl, M_, A_, D_, I_, S_, O_, N_, C_, I_, E_, R_, R_, A_, W_, A_, T_, K_, I_, N_, S_);
			printf("YOU WIN!\n");
			break;
		}
	} while (1);
exit:;
}

void q5()
{
	char input[max];
	int flag = 0;

	if (Q1I == 0 || Q2I == 0 || Q3I == 0 || Q4I == 0)
	{
		printf("\nBRO... I told you to do this one last. -.-\n");
		goto exit;
	}

	printf("\nPress ENTER to continue with question 5.");
	pressentertocontinue();
	printf("Question 5: To what length does Jono love you?\n\n");
	do
	{
		printf("Please enter an answer or press 0 to exit and answer another question: ");
		gets_s(input, max);

		if (!strcmp(input, "infinity"))
		{
			printf("\nYou got it right but I think it would be much more fun to show the answer instead of type it dontcha think?...\n\n");
			printf("Press ENTER to see the answer.");
			pressentertocontinue();
			system("color 07");
			break;
		}
		else if (!strcmp(input, "0"))
		{
			goto exit;
		}
		if (flag == 0)
		{
			printf("\nHaiku Hint:\n\"Black and White\"\nPlain as black and white\nWhere never ending loops fit\nIt is forever\n\nYou didn't think I would write something as romantic as this and not throw a poem in did you? NAWWW.\n\n");
			flag = 1;
		}
	} while (1);

	do
	{
		printf("LOVE ");
	} while (1);
exit:;
}
