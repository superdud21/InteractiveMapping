#include <iostream>
#include <string>
#include <vector>

//Build Class for Characters that will be playing
class Characters
{
	private:
		std::string characterName;
		std::string characterClass;
		std::string race;
		int level;

	public:
		Characters() 
		{
			std::cout << "User has been created" << std::endl;
		}

		void setName(std::string name)
		{
			this->characterName = name;
		}

		void setLevel(int charLevel)
		{
			this->level = charLevel;
		}

		std::string getCharacterName()
		{
			return characterName;
		}

		std::string getCharacterClass()
		{
			return characterClass;
		}

		std::string getRace()
		{
			return race;
		}

		int getLevel()
		{
			return level;
		}
	
};

//Function to initalize vector, and iterate through for loop to create instances of class and fill information according to number of players designated by user input
void fillVector()
{
	
	int numPlayers = 0;						//Variable for number of players playing the game
	std::string nameChar;				
	std::vector<Characters*> players;		//Vector to hold objects of the class Characters

	std::cout << "How many players: ";		//Get user input on how many players will be playing
	std::cin >> numPlayers;

	//Initalize for loop to dyanmically create objects and call public funtions to access private data
	for (int i = 0; i < numPlayers; i++)
	{
		Characters* myCharacter = new Characters;		//Pointer to point to Characters memory address and of the new object
		players.push_back(myCharacter);					//Add new objet to vector index
		players.at(i).getCharacterName					//Call function to get name of Character at i index
		players.at(i).getCharacterClass					//Call function to get character class at i index
		players.at(i).getRace							//Call function to get character race at i index	
		players.at(i).getLevel							//Call function to get character level at i index
	}
}

//Main Function
int main()
{
	 
	system("pause");
	return 0;
}


