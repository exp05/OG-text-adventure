#include <iostream>
int main() {
	std::string First;
	std::string Last;
	char choice1;
	char choice2;
	char choice3;
	char choice4;
	std::string bairline;
	int i = 0;
	while (i < 20) {

		std::cout << "Please enter your first name: \n\n";
		std::cin >> First;//first name
		std::cout << "Ok now what is your last name\n\n"
		std::cout << "Please enter the name of your dream company to work for: (EX DELTA, NETJETS) (No space please :)) \n\n";
		std::cin >> bairline;
		std::cout << "Our story is that of a young commercial pilot starting his journey in aviation choosing a path, conflited with the choice of societal norms or the fast and easy track our main character " << name << " is about to pick there school of choice .\n";

		std::cout << "The choice is simple you can either go the the pizza school ATP flight school and live in there housing for 9 months, or go to Embry riddle and be broke for the remainder of your life. \n\n";
		std::cout << "So whats your choice (A):for atp, or (B) for Embry riddle\n";
		std::cin >> choice1;
		i++;
		if (choice1 == 'A') {
			std::cout << "Well congratulations your now apart of the most advertised flight school in the world the next choice that you have to make is where to go here are your choices.\n\n";
			i + 5;
			std::cout << "Your choices are (A) Trenton NJ,(B) Islip NY,(C) North las vegas,(D) gwinett county Georgia, (E) Nashville TN\n";
			std::cin >> choice2;
			switch (choice2) {
			case 'A':
				std::cout << "Trenton NJ home of nothing good, but lucky for you there has been a sudden influx in student's and your training instead of taking 9 months will now take 1 year\n\n";
				i + 10;
				break;
			case 'B':
				std::cout << "Well welcome to long island, atleast the bagels are fresh.\n";
				i + 10;
				break;
			case 'C':
				std::cout << "North lasvegas, hope you have stock in penicilin.\n";
				i + 10;
				break;
			case 'D':
				std::cout << "Gwinett county goergia home of the most elite training that atp has to offer.\n";// a wild David thompson will apear and end this path
				i + 10;
				break;
			case 'E':
				std::cout << "Nashville tenesee home od Hot chicken and Dolly Parton, you'll love it there.\n";
				i + 10;
				break;
			default: std::cout << "Check your puncuation and try again\n";
			}
		}
		else {
			std::cout << "Well look at that you're like every other young eger pilot, wanting to drowned themselfes in aviation, have no fear because at ERAU that just what you'll get.\n\n";
			i++;
			std::cout << "Now that you've decided to go to riddle the real question is are you going to stick around and instruct there after your done with school?\n\n";
			std::cout << "(A)Yes I will instruct or (B) I will not instruct:\n";
			std::cin >> choice1;

			switch (choice1) {
			case 'A':
				std::cout << "Well congratulations 6 years of your life have passed by in the blink of an eye, you became the lead flight instructor at ERAU shortly before you were injured by a student learing how to take off and land. The next question is do you continue to pursue aviation as a career? When totaling your logbook you find that your at the magic 1500 hours and can go the regionals, but you'll end up having to pay a hefty amount to get your medical back, and of course there's the lawsuit from the student.\n\n";
				std::cout << "Do you spend the money and go to the regionals? (A) for yes (B) for no.\n";
				std::cin >> choice2;
				i + 10;
				break;
			case 'B':
				std::cout << "caseb";
				i++;
				break;
			default:
				std::cout << "an error accoured\n";
				break;
			}
			switch (choice2) {

			case 'A':
				std::cout << "you die as a cumudgen old regional captain.\n";
				break;
			case 'B':
				std::cout << "You leave ERAU at the top of your class and end up finding a job in Key West florida at Signature working as a line tec, shortly after getting the job you meet a individual that has a float plane operation.\n\n";
				std::cout << "You've seen this guy around a few times and he asks if you'd be willing to wash his airplane when he gets back from the next trip, which convioently would be during your lunch break\n";
				std::cout << "So do you wash the plane (A) or tell the guy that you cant today but maby tomorrow (B)\n";
				std::cin >> choice3;
					i++;
				break;
			default:
				std::cout << "check your punctuation\n";
			}
			if (choice3 == 'A') { ///// wash plane become airline captian
				std::cout << " You assit the nice genteleman and while doing so he states that he's looking for a pilot, you quickly bring up your experience at ERAU and after talking about the local talent, the Man decided to offer you a job.\n\n";
				std::cout << "As you and the man work together you come to find out that the Man is the head recruiter for " << bairline << " and states that if you do a good job in the coming months, then he will put in a good word for you.";
			
		

			}

			std::cout << "place 50 here to end the program: ";//this must be deleated at end of debug
			std::cin >> i;
		}
	}
}