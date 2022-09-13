#include <iostream>
int main() {// check the answers flows, ex choice 2b does not have the associated i values needed or the actual ending required to call that complete.
	std::string First;
	std::string Last;
	char choice1;
	char choice2;
	char choice3;
	char choice4;
	char choice5;
	std::string bairline;
	int i;
	while (i < 20) {
		std::cout << "Please enter your first name: \n\n";
		std::cin >> First;//first name
		std::cout << '\n';
		std::cout << "Ok now what is your last name\n\n";
		std::cin >> Last;// last name input
		std::cout << '\n';
		std::cout << "Please enter the name of your dream company to work for: (EX DELTA, NETJETS) (No space please :)) \n\n";
		std::cin >> bairline;
		std::cout << "Our story is that of a young commercial pilot starting his journey in aviation choosing a path, conflited with the choice of societal norms or the fast and easy track our main character " << First <<" "<< Last << " is about to pick there school of choice .\n";

		std::cout << "The choice is simple you can either go the the pizza school ATP flight school and live in there housing for 9 months, or go to Embry riddle and be broke for the remainder of your life. \n\n";
		std::cout << "So whats your choice (A):for atp, or (B) for Embry riddle\n";
		std::cin >> choice1;
		i+5;
		if ((choice1 == 'A') || choice1 == 'a') {
			std::cout << "Well congratulations your now apart of the most advertised flight school in the world the next choice that you have to make is where to go here are your choices.\n\n";
			i+5;
			std::cout << "Your choices are (A) Trenton NJ,(B) Islip NY,(C) North las vegas,(D) gwinett county Georgia, (E) Nashville TN\n";
			std::cin >> choice2;
			switch (choice2) {
			case 'a':
			case 'A':
				std::cout << "Trenton NJ home of nothing good, but lucky for you there has been a sudden influx in student's and your training instead of taking 9 months will now take 1 year\n\n";
				i+5;
				break;
			case 'b':
			case 'B':
				std::cout << "Well welcome to long island, atleast the bagels are fresh.\n";
				i+5;
				break;
			case 'c':
			case 'C':
				std::cout << "North lasvegas, hope you have stock in penicilin.\n";
				i + 5;
				break;
			case 'd':
			case 'D':
				std::cout << "Gwinett county goergia home of the most elite training that atp has to offer.\n";// a wild David thompson will apear and end this path
				i + 5;
				break;
			case 'e':
			case 'E':
				std::cout << "Nashville tenesee home of Hot chicken and Dolly Parton, you'll love it there.\n";
				i + 5;
				break;
			default: std::cout << "Please check you're response and try again";
			}
		}
		else if ((choice1 == 'B') || choice1 == 'b') {
			std::cout << "Well look at that you're like every other young eger pilot, wanting to drowned themselfes in aviation, have no fear because at ERAU that just what you'll get.\n\n";
			i+5;
			std::cout << "Now that you've decided to go to riddle the real question is are you going to stick around and instruct there after your done with school?\n\n";
			std::cout << "(A)Yes I will instruct or (B) I will not instruct:\n";
			std::cin >> choice2;

			switch (choice2) {
			case 'a':
			case 'A':
				std::cout << "Well congratulations 6 years of your life have passed by in the blink of an eye, you became the lead flight instructor at ERAU shortly before you were injured by a student learing how to take off and land. The next question is do you continue to pursue aviation as a career? When totaling your logbook you find that your at the magic 1500 hours and can go the regionals, but you'll end up having to pay a hefty amount to get your medical back, and of course there's the lawsuit from the student.\n\n";
				std::cout << "Do you spend the money and go to the regionals? (A) for yes (B) for no.\n";//this causes choice 2 to now be b and there has been no outcome made for this choice.
				std::cin >> choice5;
				break;
			case 'b':
			case 'B':
				std::cout << "You leave ERAU at the top of your class and end up finding a job in Key West florida at Signature working as a line tec, shortly after getting the job you meet a individual that has a float plane operation.\n\n";
				i + 5;
				std::cout << "You and the gentleman talk and exchange plesntrys. after the short converstation he asks if youd be willing to help wash his plane.\n";
				std::cout << "A) Yes  B)No";
				std::cin >> choice3;
				break;
			default:
				break;
			}
			switch (choice5){
			case 'a':
			case 'A':
				std::cout << "you die as a crumudgen old regional captain.\n";
				i + 10;
				break;
			case 'B':
			case 'b':
				std::cout << "You decide to move back in with your parents to there retirement home in the Florida key's." << "\n" << "They force you to get a job, since you still have a passion for aviation you decide to get a job at the local FBO.";
					std::cout << "As you work the line a gentelman notices you hangin out at the line shack one day." << "\n" << "You recognise him as one of the base tenants.";
				std::cout << "You've seen this guy around a few times and he asks if you'd be willing to wash his airplane when he gets back from the next trip, which convioently would be during your lunch break\n\n";
				std::cout << "So do you wash the plane (A)?" << "\n" << "or tell the guy that you cant today but maby tomorrow (B)\n";
				std::cin >> choice3;
				i + 5;
				break;
			default:
				std::cout << "check your punctuation\n";
			}
			if ((choice3 == 'A') || choice3 == 'a') { ///// wash plane become airline captian
				std::cout << " You assit the nice genteleman and while doing so he states that he's looking for a pilot, you quickly bring up your experience at ERAU and after talking about the local talent, the Man decided to offer you a job.\n\n";
				std::cout << "The man goes on to state that he has two jobs avaiable.\n" << "Job one is flying a Beech Jet around the US doing 135 work with his brother, Job two is doing ferry flights around the Keys with him in a cesna 208 on floats" << "\n";
				std::cout << "Which job will it be?\n" << "(A) Job in the beech jet?" << "(B) Job in the 208?\n";
				i + 5;
				std::cin >> choice4;
			}
		
		else if ((choice3 == 'B') || choice3 == 'b') {
				std::cout << "After telling the nice man that you were too busy and that you'd do it for sure tomorrow, a charter operation with a nice Blue paint scheme and the word UP shows up to the ramp." << "\n" << "You begin to service there aircraft and in talking with one of there pilots, you find out there hiring." << "\n" << "The gentleman goes on to state that if you put him down as the one who refrenced you, then you will 100% get the job.\n";
				std::cout << "Do you (C) Take the job" << "\n" << "Or (D) Wash the nice mans plane tomorrow?\n";
					i + 5;
					std::cout << i;
					std::cin >> choice4;
			}
			switch (choice4) {
			case 'a':
			case 'A':
				std::cout << "As you and the man work together you come to find out that the Man is the head recruiter for " << bairline << " and states that if you do a good job in the coming months, then he will put in a good word for you.";
				i + 5;
				break;
			case 'b':
			case 'B':
				std::cout << "After flying the Beech jet for a few months you find out that the nice man that got you the job was actualy the hiring manager for " << bairline << "When you call him up to talk to him, he informs you that he uses his 208 as a test to see who you are as an individual. The man goes on to state that unfortunatley becaus you did'nt help him, and instead wrnt onto the shiney jet, that he would not be able to help you get a job at " << bairline << "\n";
				i + 10;
				break;
			case 'd':
			case 'D':
				std::cout << "As you wash the mans plane the following day you notice the keys in the airplane, and decide to take the plane for a joy ride." << "\n" << "Neadless to say this does not go well for you.";
				std::cout << "After landing you are met by the police and taken into custody, the faa revokes your certificates, and next thing you know you're working at subway... womp womp.";
				i + 10;
				break;
			case 'c':
			case 'C':
				std::cout << "You applly to the company with the blue up on the tail. A few days later you recieve the call stating that you have been hired.\n";
				std::cout << " You make it through training and find out you will be flying the king air 350. After going through type school, you arive for your first day of IOE and are met by an individual with his shirt un tucked and wearing a ball cap backwards.";
				std::cout << "A sinking feeling begins to form in you're gut, but yet you remain optimistic.\n";
				std::cout << "You decide to play it cool and introduce yourself.\n";
				std::cout << "Hight i'm " << First << " " << Last << "." << " The individual looks at you, shakes his head and states.... Well atleast you know your name let's see what else you can muster up.\n\n";
				std::cout << " Your first trip as a charter pilot is off to a rockey start, and in your excitement you forgot to eat breakfast.\n";
				std::cout << " You look at the suposed training captain as you load your bag onto the aircraft, and ask... How does the whole food thing work.... He snapps back at you and stares with his grey dead eyes.... We dont eat..\n";
				std::cout << "You both go back into the lobby to wait for your passengers.\n" << "After your passengers show up an hour late, the open ther massive SUV trunck to show three jumbo totes and 4 dogs...\n";
				std::cout << "With the aircaft packed to the brim with pets, people and things alike, you set off to start the airplane, only one problem it dosent start....Gues you should have washed that airplane huh....";
				i + 10;
				break;
			default:
				std::cout << "check your answer";
			}
		}
		std::cout << "\n" << i << "\n";
		}
	}