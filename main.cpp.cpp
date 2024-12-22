#include <iostream>
#include <vector>

using namespace std;

unsigned int chosen_album{ };
unsigned int chosen_song{ };

vector<string> album1 = { "Song1", "Song2", "Song3", "Song4", "Song5" };
vector<string> album2 = {"Song6", "Song7", "Song8", "Song9", "Song10"};

void displayAlbum(vector<string> album)
{
	for (auto i = 0; i < album.size(); i++)
	{
		if (i != album.size() - 1)
		{
			cout << album[i] << "| ";
		}
		else
		{
			cout << album[i];
		}
	}
}

void chooseSong(unsigned int chosen_song, vector<string> album)
{
	for (auto i = 0; i < 100; i++)
	{
		cout << "\n";
	}

	cout <<   "             "<<album[chosen_song - 1] <<
		" \n 0:00 =|================== 1:00";
}

int main()
{
	cout << "Enter an Album to Listen to: \n";

	cin >> chosen_album;

	if (chosen_album == 1)
	{
		displayAlbum(album1);
	}
	else if (chosen_album == 2)
	{
		displayAlbum(album2);
	}
	else
	{
		cout << "Chose an Unavailable Album!";
		exit(0);
	}

	cout << "Choose a song (1 - 5): ";

	cin >> chosen_song;

	if (chosen_album == 1)
	{
		chooseSong(chosen_song, album1);
	}
	else if (chosen_album == 2)
	{
		chooseSong(chosen_song, album2);
	}
	else
	{
		exit(0);
	}

	return 0;
}