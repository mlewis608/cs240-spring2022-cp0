#include <iostream>
#include <stdlib.h>
using namespace std;

class Player {
   public:
      Player(string name, unsigned int num, string team) {
         playerName = name;
	 jerseyNumber = num;
	 teamName = team;
      }

      Player() {
         playerName = "";
         jerseyNumber = -1;
         teamName = "";
      }

      void show() {
         cout << playerName << " (#" << jerseyNumber << "): " << teamName << endl;
      }

   private:
      string playerName = "";
      unsigned int jerseyNumber = -1;
      string teamName = "";
};

int main(int argc, char *argv[]) {
   Player one;
   Player *two = new Player("Tom Brady", 12, "New England Patriots");
   one.show();
   two->show();
   delete(two);
}
