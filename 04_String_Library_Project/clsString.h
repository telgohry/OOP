/* String Library Project */

#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class clsString
{
private:
	string _Value;
public:
	clsString()
	{
		_Value = "";
	}
	clsString(string value)
	{
		_Value = value; 
	}
	void SetValue(string value)
	{
		_Value = value;
	}
	string GetValue()
	{
		return _Value;
	}
	__declspec(property(get = GetValue, put = SetValue)) string value;

	static void PrintFirstLetterOfEachWord(string str)
	{
		if (str[0] != ' ')
		{
			cout << str[0] << "\n";
		}

		for (int i = 1; str[i]; i++)
		{
			if (str[i - 1] == ' ')
			{
				cout << str[i] << "\n";
			}
		}
	}

	void PrintFirstLetterOfEachWord()
	{
		PrintFirstLetterOfEachWord(_Value);
	}

	static string UpperFirstLetterOfEachWord(string str)
	{
		bool isFirstLetter = true;

		for (int i = 0; str[i]; i++)
		{
			if (str[i] != ' ' && isFirstLetter)
			{
				str[i] = toupper(str[i]);
			}

			isFirstLetter = (str[i] == ' ' ? true : false);
		}

		return str;
	}

	void UpperFirstLetterOfEachWord()
	{
		_Value = UpperFirstLetterOfEachWord(_Value);
	}

	static string LowerFirstLetterOfEachWord(string str)
	{
		bool isFirstLetter = true;

		for (int i = 0; str[i]; i++)
		{
			if (str[i] != ' ' && isFirstLetter)
			{
				str[i] = tolower(str[i]);
			}

			isFirstLetter = (str[i] == ' ' ? true : false);
		}

		return str;
	}

	void LowerFirstLetterOfEachWord()
	{
		_Value = LowerFirstLetterOfEachWord(_Value);
	}

	static string UppercaseString(string str)
	{
		for (int i = 0; str[i]; i++)
		{
			str[i] = toupper(str[i]);
		}

		return str;
	}

	void UppercaseString()
	{
		_Value = UppercaseString(_Value);
	}

	static string LowercaseString(string str)
	{
		for (int i = 0; str[i]; i++)
		{
			str[i] = tolower(str[i]);
		}

		return str;
	}

	void LowercaseString()
	{
		_Value = LowercaseString(_Value);
	}

	static char InvertCharacterCase(char ch)
	{
		return (isupper(ch) ? tolower(ch) : toupper(ch));
	}

	static string InvertAllLettersCase(std::string str)
	{
		for (int i = 0; str[i]; i++)
		{
			str[i] = InvertCharacterCase(str[i]);
		}

		return str;
	}

	void InvertAllLettersCase()
	{
		_Value = InvertAllLettersCase(_Value);
	}

	static int CountUppercaseLetters(string str)
	{
		int counter = 0;
		for (int i = 0; str[i]; i++)
		{
			if (isupper(str[i]))
			{
				counter++;
			}
		}

		return counter;
	}

	int CountUppercaseLetters()
	{
		return CountUppercaseLetters(_Value);
	}

	static int CountLowercaseLetters(string str)
	{
		int counter = 0;
		for (int i = 0; str[i]; i++)
		{
			if (islower(str[i]))
			{
				counter++;
			}
		}

		return counter;
	}

	int CountLowercaseLetters()
	{
		return CountLowercaseLetters(_Value);
	}

	static int CountLetterInString(string str, char ch)
	{
		int counter = 0;

		for (int i = 0; str[i]; i++)
		{
			if (str[i] == ch)
			{
				counter++;
			}
		}

		return counter;
	}

	int CountLetterInString(char ch)
	{
		return CountLetterInString(_Value, ch);
	}

	static int CountLettersNotCaseSensitice(string str, char ch, bool matchCase = true)
	{
		if (matchCase == true)
		{
			return CountLetterInString(str, ch);
		}
		else
		{
			int counter = 0;
			ch = tolower(ch);

			for (int i = 0; str[i]; i++)
			{
				if (tolower(str[i]) == ch)
				{
					counter++;
				}
			}

			return counter;
		}
	}

	int CountLettersNotCaseSensitice(char ch, bool matchCase = true)
	{
		return CountLettersNotCaseSensitice(_Value, ch, matchCase);
	}

	static bool IsVowel(char ch)
	{
		ch = tolower(ch);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	static int CountVowelsInString(string str)
	{
		int counter = 0;

		for (int i = 0; str[i]; i++)
		{
			if (IsVowel(str[i]))
			{
				counter++;
			}
		}

		return counter;
	}

	int CountVowelsInString()
	{
		return CountVowelsInString(_Value);
	}

	static void PrintVowelsInString(string str)
	{
		for (int i = 0; str[i]; i++)
		{
			if (IsVowel(str[i]))
			{
				std::cout << str[i] << "   ";
			}
		}
		std::cout << "\n";
	}

	void PrintVowelsInString()
	{
		PrintVowelsInString(_Value);
	}

	static void PrintEachWordInString(string str)
	{
		string delim = " ";
		string sWord = "";
		short pos = 0;

		cout << "\n\nYour string words are:\n";

		while ((pos = str.find(delim)) != string::npos)
		{
			sWord = str.substr(0, pos);
			if (sWord != "")
			{
				cout << sWord << "\n";
			}

			str.erase(0, pos + delim.length());
		}

		if (str != "")
		{
			cout << str << "\n";
		}
	}

	void PrintEachWordInString()
	{
		PrintEachWordInString(_Value);
	}

	static int CountWordsInString(string str)
	{
		string delim = " ";
		string sWord = "";
		short pos = 0;
		int counter = 0;

		while ((pos = str.find(delim)) != string::npos)
		{
			sWord = str.substr(0, pos);
			if (sWord != "")
			{
				counter++;
			}

			str.erase(0, pos + delim.length());
		}

		if (str != "")
		{
			counter++;
		}

		return counter;

	}

	int CountWordsInString()
	{
		return CountWordsInString(_Value);
	}

	static vector<string> SplitString(string str, string delim)
	{
		vector<string>vWords;
		short pos = 0;
		string sWord = "";

		while ((pos = str.find(delim)) != string::npos)
		{
			sWord = str.substr(0, pos);
			if (sWord != "")
			{
				vWords.push_back(sWord);
			}

			str.erase(0, pos + delim.length());
		}

		if (str != "")
		{
			vWords.push_back(str);
		}

		return vWords;
	}

	vector<string> SplitString(string delim)
	{
		return SplitString(_Value, delim);
	}

	static void PrintStringVector(vector<string>vString)
	{
		for (string& str : vString)
		{
			cout << str << "\n";
		}
	}

	static string TrimLeft(string str)
	{
		for (int i = 0; str[i]; i++)
		{
			if (str[i] != ' ')
			{
				return str.substr(i, str.length() - i);
			}
		}

		return "";
	}

	void TrimLeft()
	{
		_Value = TrimLeft(_Value);
	}

	static string TrimRight(string str)
	{
		for (int i = str.length() - 1; str[i] >= 0; i--)
		{
			if (str[i] != ' ')
			{
				return str.substr(0, i + 1);
			}
		}

		return "";
	}

	void TrimRight()
	{
		_Value = TrimRight(_Value);
	}

	static string Trim(string str)
	{
		return (TrimLeft(TrimRight(str)));
	}

	void Trim()
	{
		_Value = Trim(_Value);
	}

	static string JoinString(vector<string> vString, string delim)
	{
		string str = "";

		for (string& s : vString)
		{
			str += s + delim;
		}

		return str.substr(0, str.length() - delim.length());
	}

	static string ReverseWords(string str)
	{
		vector<string>vWords = SplitString(str, " ");
		string reversedString = "";


		for (int i = vWords.size() - 1; i >= 0; i--)
		{
			reversedString += vWords[i] + " ";
		}

		return reversedString.substr(0, reversedString.length() - 1);
	}

	void ReverseWords()
	{
		_Value = ReverseWords(_Value);
	}

	static string ReplaceWordsInString(string str, string ReplaceFrom, string ReplaceTo)
	{
		vector<string>vString = SplitString(str, " ");
		string replacedString = "";

		for (string& word : vString)
		{
			if (word == ReplaceFrom)
			{
				word = ReplaceTo;
			}
		}

		replacedString = JoinString(vString, " ");

		return replacedString;
	}

	void ReplaceWordsInString(string ReplaceFrom, string ReplaceTo)
	{
		_Value = ReplaceWordsInString(_Value, ReplaceFrom, ReplaceTo);
	}


	static string ReplaceWordsInStringCase(string str, string ReplaceFrom, string ReplaceTo, bool MatchCase = true)
	{
		vector<string>vString = SplitString(str, " ");
		string replacedString = "";

		if (MatchCase == false)
		{
			ReplaceFrom = LowercaseString(ReplaceFrom);
			for (string& word : vString)
			{
				if (LowercaseString(word) == ReplaceFrom)
				{
					word = ReplaceTo;
				}
			}
		}
		else
		{
			for (string& word : vString)
			{
				if (word == ReplaceFrom)
				{
					word = ReplaceTo;
				}
			}
		}

		replacedString = JoinString(vString, " ");

		return replacedString;
	}

	void ReplaceWordsInStringCase(string ReplaceFrom, string ReplaceTo, bool MatchCase = true)
	{
		_Value = ReplaceWordsInStringCase(_Value, ReplaceFrom, ReplaceTo, MatchCase);
	}

	static string RemovePunctuations(string str)
	{
		string strPuncRemoved = "";
		for (int i = 0; str[i]; i++)
		{
			if (!ispunct(str[i]))
			{
				strPuncRemoved += str[i];
			}
		}

		return strPuncRemoved;
	}

	void RemovePunctuations()
	{
		_Value = RemovePunctuations(_Value);
	}
};

