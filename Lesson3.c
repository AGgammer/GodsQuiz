#include <stdio.h>


int main(){
	int x,correct,wrong=0;
	
	Zeus:
		correct=0;
			//Question 1
		printf("Who was Zeus' Mother? \n");
		printf("1. Hera \n");
		printf("2. Rhea \n");
		printf("3. Eileithyia \n");
		printf("4. Dione \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 2
		printf("What does Zeus' name mean? \n");
		printf("1. Bright \n");
		printf("2. King \n");
		printf("3. Cloud \n");
		printf("4. Master \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("How many siblings did Zeus have (including himself)? \n");
		printf("1. Three \n");
		printf("2. Four \n");
		printf("3. Five \n");
		printf("4. Six \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("Which hundred-handed figure did Thetis call to Olympus when the other Olympians wanted to bind Zeus? \n");
		printf("1. Cottus \n");
		printf("2. Campe \n");
		printf("3. Cyges \n");
		printf("4. Briareus \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("What is the Roman equivalent of Zeus? \n");
		printf("1. Jupiter \n");
		printf("2. Eris \n");
		printf("3. Neptune \n");
		printf("4. Pluto \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Zeus;
		}
	Hera:
		correct=0;
			//Question 1
		printf("What was one of Hera's most famous epiphets from Homer? \n");
		printf("1. Golden-armed \n");
		printf("2. Snow-white \n");
		printf("3. Blue-eyed \n");
		printf("4. Cow-eyed \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("What were the games called, held every fourth year, for which the Sixteen Women wove a robe for Hera? \n");
		printf("1. Heraea \n");
		printf("2. Thesmophoria \n");
		printf("3. Panathenaia \n");
		printf("4. Dionysia \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("What was the name of the watchman Hera sent to guard Io? \n");
		printf("1. Cerberus \n");
		printf("2. Orthrus \n");
		printf("3. Scylla \n");
		printf("4. Argus Panoptes \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Hera's Roman counterpart? \n");
		printf("1. Juno \n");
		printf("2. Minerva \n");
		printf("3. Diana \n");
		printf("4. Venus \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Who sent Hera a golden chair with invisible fetters? \n");
		printf("1. Hephaestus \n");
		printf("2. Daedalus \n");
		printf("3. Prometheus \n");
		printf("4. Ares \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Hera;
		}
	Ares:
		correct=0;
			//Question 1
		printf("Which daughter of Ares and Aphrodite did Cadmus marry? \n");
		printf("1. Alcippe \n");
		printf("2. Harmonia \n");
		printf("3. Antiope \n");
		printf("4. Penthesilea \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("Who told Hephaestus about Aphrodite's affair with Ares? \n");
		printf("1. Helios \n");
		printf("2. Apollo \n");
		printf("3. Zeus \n");
		printf("4. Hermes \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("Whom does Homer call the sister and comrade of Ares the man-slayer? \n");
		printf("1. Eris \n");
		printf("2. Artemis \n");
		printf("3. Athena \n");
		printf("4. Iris \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Ares' Roman counterpart? \n");
		printf("1. Jupiter \n");
		printf("2. Eris \n");
		printf("3. Mars \n");
		printf("4. Ares \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==3){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("What does 'Areopagus' translate to? \n");
		printf("1. Ares' Hill \n");
		printf("2. Ares' Chariot \n");
		printf("3. Ares' Temple \n");
		printf("4. Ares' Shield \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Ares;
		}
	Aphrodite:
		correct=0;
			//Question 1
		printf("What was the name of the son born from Aphrodite and Anchises? \n");
		printf("1. Paris \n");
		printf("2. Adonis \n");
		printf("3. Aeneas \n");
		printf("4. Hector \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==3){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("Which three goddesses were immune to Aphrodite's charms? \n");
		printf("1. Persephone, Demeter, and Hera \n");
		printf("2. Artemis, Persephone, and Hestia \n");
		printf("3. Athena, Hera, and Demeter \n");
		printf("4. Artemis, Athena, and Hestia \n");
		printf("5. Argiri ti sto poutso ai gamisou \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>5)
				printf("Invalid answer\nChoose between 1,2,3,4,5 \n");
		} while (x<1 || x>5);
		if (x==1 || x==5){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("What did Aphrodite promise Paris in the judgment of the goddesses? \n");
		printf("1. The kingdom over all men (gay) \n");
		printf("2. Victory in war \n");
		printf("3. The hand of Helen \n");
		printf("4. Immortal life \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==3){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Aphrodite's Roman counterpart? \n");
		printf("1. Venus \n");
		printf("2. Eris \n");
		printf("3. Minerva \n");
		printf("4. Ares \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Who made the Cnidian Aphrodite, the most famous statue of the goddess in antiquity? \n");
		printf("1. Pheidias \n");
		printf("2. Myron \n");
		printf("3. Polyclitus \n");
		printf("4. Praxiteles \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Aphrodite;
		}
	Hades:
		correct=0;
			//Question 1
		printf("What does the name 'Hades' mean, according to most people in Plato's day? \n");
		printf("1. The Pitiless One \n");
		printf("2. The Unseen One \n");
		printf("3. The Dark-Haired One \n");
		printf("4. The Ruthless One \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("What did the Cyclopes give Hades, as they gave Zeus the thunderbolt and Poseidon the trident? \n");
		printf("1. A helmet \n");
		printf("2. A sickle \n");
		printf("3. A scepter \n");
		printf("4. A chariot \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("What does the epithet 'Plouton' mean? \n");
		printf("1. The Unseen One \n");
		printf("2. The Host of Many \n");
		printf("3. The Grisly God \n");
		printf("4. The Wealth-Giver \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Hades' Roman counterpart? \n");
		printf("1. Pluto \n");
		printf("2. Ouranos \n");
		printf("3. Arceus \n");
		printf("4. Hades \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("What fraction of the year did Persephone spend with Hades? \n");
		printf("1. One-half \n");
		printf("2. One-quarter \n");
		printf("3. Two-thirds \n");
		printf("4. One-third \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Hades;
		}
	Apollo:
		correct=0;
			//Question 1
		printf("Who is Apollo's mother? \n");
		printf("1. Leto \n");
		printf("2. Hera \n");
		printf("3. Demeter \n");
		printf("4. Maia \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("Which satyr challenged Apollo to a music contest and was flayed alive? \n");
		printf("1. Pan \n");
		printf("2. Orpheus \n");
		printf("3. Marsyas \n");
		printf("4. Cinyras \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==3){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("Which centaur received the child Asclepius from Apollo? \n");
		printf("1. Pholus \n");
		printf("2. Nessus \n");
		printf("3. Chiron \n");
		printf("4. Eurytion \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==3){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Apollo's Roman counterpart? \n");
		printf("1. Apollo \n");
		printf("2. Astron \n");
		printf("3. Arceus \n");
		printf("4. Ouranos \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Who was the nymph that bore Apollo’s son Aristaeus? \n");
		printf("1. Marpessa \n");
		printf("2. Hecuba \n");
		printf("3. Daphne \n");
		printf("4. Cyrene \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Apollo;
		}
	Artemis:
		correct=0;
			//Question 1
		printf("On which island was Artemis born? \n");
		printf("1. Delos \n");
		printf("2. Crete \n");
		printf("3. Samos \n");
		printf("4. Rhodes \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("Who is the mother of Artemis? \n");
		printf("1. Rhea \n");
		printf("2. Leto \n");
		printf("3. Themis \n");
		printf("4. Hera \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("What did Artemis transform Actaeon into after he saw her bathing? \n");
		printf("1. A wolf \n");
		printf("2. A lion \n");
		printf("3. A boar \n");
		printf("4. A stag \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Artemis' Roman counterpart? \n");
		printf("1. Diana \n");
		printf("2. Vesta \n");
		printf("3. Minerva \n");
		printf("4. Ceres \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Under what name did Hippolytus rule in Italy after being resurrected by Artemis? \n");
		printf("1. Perseus \n");
		printf("2. Virbius \n");
		printf("3. Theseus \n");
		printf("4. Aeneas \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Artemis;
		}
	Poseidon:
		correct=0;
			//Question 1
		printf("Who was Poseidon's wife? \n");
		printf("1. Demeter \n");
		printf("2. Amphitrite \n");
		printf("3. Aethra \n");
		printf("4. Medusa \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("Poseidon broke off a piece of which island and threw it on the Giant Polybotes? \n");
		printf("1. Naxos \n");
		printf("2. Nisyros \n");
		printf("3. Delos \n");
		printf("4. Rhodes \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("Which mortal woman, a daughter of Danaus, bore Poseidon's son Nauplius? \n");
		printf("1. Aethra \n");
		printf("2. Amymone \n");
		printf("3. Caenis \n");
		printf("4. Tyro \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Poseidon's Roman counterpart? \n");
		printf("1. Nautilus \n");
		printf("2. Neptune \n");
		printf("3. Nesber \n");
		printf("4. Saturn \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Which of these is one of the playful derivations of Poseidon's name that Socrates offers in Plato's Cratylus? \n");
		printf("1. Tamer of horses \n");
		printf("2. Knower of many things \n");
		printf("3. Lord of the waters \n");
		printf("4. Husband of the earth \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Poseidon;
		}
	Hestia:
		correct=0;
			//Question 1
		printf("What did Hestia swear her eternal virginity upon? \n");
		printf("1. Zeus' head \n");
		printf("2. The sacred flame of Olympus \n");
		printf("3. The head of Hera \n");
		printf("4. The River Styx \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("What did Zeus grant Hestia in place of marriage? \n");
		printf("1. The throne of Olympus and dominion over the sea \n");
		printf("2. The golden apples of the Hesperides \n");
		printf("3. A seat in the middle of the house and the richest portion of the offerings \n");
		printf("4. The thunderbolt and the eagle \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==3){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("Which Homeric Hymn is dedicated to Hestia alone? \n");
		printf("1. Hymn 5 \n");
		printf("2. Hymn 4 \n");
		printf("3. Hymn 19 \n");
		printf("4. Hymn 24 \n");
		printf("5. Fuck off \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>5)
				printf("Invalid answer\nChoose between 1,2,3,4,5 \n");
		} while (x<1 || x>4);
		if (x==4 || x==5){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Hestia's Roman counterpart? \n");
		printf("1. Diana \n");
		printf("2. Vesta \n");
		printf("3. Minerva \n");
		printf("4. Ceres \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Which two gods wanted to marry Hestia, prompting her vow of chastity? \n");
		printf("1. Ares and Hermes \n");
		printf("2. Hephaestus and Dionysus \n");
		printf("3. Zeus and Hades \n");
		printf("4. Apollo and Poseidon \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Hestia;
		}
	Hermes:
		correct=0;
			//Question 1
		printf("Who was Hermes' mother? \n");
		printf("1. Hera \n");
		printf("2. Maia \n");
		printf("3. Demeter \n");
		printf("4. Leto \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("Where was Hermes born? \n");
		printf("1. Mount Olympus \n");
		printf("2. Mount Cyllene \n");
		printf("3. Mount Ida \n");
		printf("4. Mount Parnassus \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("What did Hermes invent on the very first day of his life? \n");
		printf("1. The lyre \n");
		printf("2. The alphabet \n");
		printf("3. The caduceus \n");
		printf("4. The harp \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Hermes' Roman counterpart? \n");
		printf("1. Mercury \n");
		printf("2. Vinquibus \n");
		printf("3. Jove \n");
		printf("4. Astarion \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Who is Hermes' female counterpart in the messenger role? \n");
		printf("1. Athena \n");
		printf("2. Hecate \n");
		printf("3. Iris \n");
		printf("4. Artemis \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==3){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Hermes;
		}
	Athena:
		correct=0;
			//Question 1
		printf("According to Pindar, who opens the head of Zeus with a bronze axe so that Athena can be born? \n");
		printf("1. Hermes \n");
		printf("2. Hephaestus \n");
		printf("3. Apollo \n");
		printf("4. Ares \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("Who testified that Athena had planted the olive first in her contest with Poseidon? \n");
		printf("1. Perseus \n");
		printf("2. Cecrops \n");
		printf("3. Theseus \n");
		printf("4. Oedipus \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("What was the name of Athena’s childhood companion, the daughter of Triton, whom she killed in a quarrel? \n");
		printf("1. Artemis \n");
		printf("2. Pallas \n");
		printf("3. Persephone \n");
		printf("4. Hestia \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Athena's Roman counterpart? \n");
		printf("1. Mercury \n");
		printf("2. Minerva \n");
		printf("3. Diana \n");
		printf("4. Ceres \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("Which musical instrument was Athena credited with creating? \n");
		printf("1. The lyre \n");
		printf("2. The flute \n");
		printf("3. The harp \n");
		printf("4. The panpipes \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==2){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("NOBODY EXPECTS THE ROUND OF 2s TO COME TWICE, you can continue onto the next God ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Athena;
		}
	Hephaestus:
		correct=0;
			//Question 1
		printf("Which god got Hephaestus drunk so he would release Hera from the golden throne? \n");
		printf("1. Hermes \n");
		printf("2. Poseidon \n");
		printf("3. Apollo \n");
		printf("4. Dionysus \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==4){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		//Question 2
		printf("What did Hephaestus create to protect Crete? \n");
		printf("1. Talos \n");
		printf("2. The Hydra \n");
		printf("3. Cerberus \n");
		printf("4. The Minotaur \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 3
		printf("On which island did Hephaestus land after Zeus flung him from the threshold of heaven? \n");
		printf("1. Lemnos \n");
		printf("2. Delos \n");
		printf("3. Samos \n");
		printf("4. Crete \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 4
		printf("What was Hephaestus' Roman counterpart? \n");
		printf("1. Vulcan \n");
		printf("2. Liber \n");
		printf("3. Quirinus \n");
		printf("4. Fons \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
			//Question 5
		printf("For whom did Hephaestus make new armour, at the request of Thetis? \n");
		printf("1. Achilles \n");
		printf("2. Hector \n");
		printf("3. Ajax \n");
		printf("4. Odysseus \n");
		do {
			scanf("%d",&x);
			if (x<1 || x>4)
				printf("Invalid answer\nChoose between 1,2,3,4 \n");
		} while (x<1 || x>4);
		if (x==1){
			correct++;
			printf("Correct! \n");
		} else {
			printf("Wrong :( \n");
			wrong++;
		}
		printf("Final Score: %d/5\n", correct);
		if (correct==5) {
			printf("You have finished all gods ! \n");
		} else {
			printf("You must get all 5 correct to continue \n");
			goto Hephaestus;
		}
		printf("You got %d questions wrong \n",wrong);
		printf("Accuracy %.2f%% \n", (float)wrong/(60+wrong)*100);
	return 0;
}
