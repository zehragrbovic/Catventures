#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define plots 26

typedef struct Chapter{

    char img[1000];
    char text[5000];
    char question[1000];
    char answer1[1000], answer2[1000];
    int res1, res2;

} Chapter;


int main()
{
    char comments[7][20] = {"Great job", "Keep it up", "Nice work", "You got this", "Keep going", "Almost there", "Push through"};
    Chapter story[plots] = {
        {},
        {"    |\\__/,|   (`\\\n  _.|o o  |_   ) )\n-(((---(((--------", "You need to get out of this dangerous nest.\nThe nest is high on a tree branch.\nThis is your first of many choices.", "If you want to go with the first choice press (1), and for the second choice press (2).", "(1) You carefully sneak from one branch to another to get down from the tree without getting hurt.", "(2) You quickly jump down from the nest to buy time and stay unnoticed.", 2, 3},
        {"                   .-.\n                  / /\n                 / |\n   |\\     ._ ,-""  `.\n   | |,,_/  7        ;\n `;=     ,=(     ,  /\n  |`q  q  ` |    \\_,|\n .=; <> _ ; /  ,/'/ |\n';|\\,j_ \;=\ ,/   `-'\n    `--'_|\\  )\n   ,' | /  ;'\n  (,,/ (,,/   ", "You carefully move from one branch to the other, making your way down slowly.\nThe hawk still has not come back, but you should move quickly and find your way back before he catches you again.", "The escape from the nest was successful.\nNow you need to figure out where you came from.\nYou can choose how to find clues.", "(1) You look around to investigate your surroundings and try to find some sort of a path that leads back to your family.", "(2) You listen to your surroundings, as maybe could hear your family in the distance.", 4, 5},
        {"                   .-.\n                  / /\n                 / |\n   |\\     ._ ,-""  `.\n   | |,,_/  7        ;\n `;=     ,=(     ,  /\n  |`q  q  ` |    \\_,|\n .=; <> _ ; /  ,/'/ |\n';|\\,j_ \;=\ ,/   `-'\n    `--'_|\\  )\n   ,' | /  ;'\n  (,,/ (,,/   ", "You quickly jump from the nest.\nThe nest is quite high, but luckily, the cats always land on their feet.\nHopefully no one heard you.\nNow it�s the time to act fast and get back to your family.", "The escape from the nest was successful.\nNow you need to figure out where you came from.\nYou can choose how to find clues.", "(1) You look around to investigate your surroundings and try to find some sort of a path that leads back to your family.", "(2) You listen to your surroundings, as maybe could hear your family in the distance.", 4, 5},
        {"      ,_     _,\n      |\\\\___/\/|\n      |=6   6=|\n      \\=._Y_.=/\n       )  `  (    ,\n      /       \\  ((\n      |       |   ))\n     /| |   | |\\_/\/\n     \\| |._.| |/-`\n      '''   '''", "You look around and notice there is a small path to the east that could maybe lead to the clearing you came from.\nThis path looks nicely made and is wide but there are a few places that you can hide in.\nThere is another path to the north which is smaller and more hidden away with plenty of places to hide.\nHowever, this could be an animal path and you could encounter other animals that use this path.", "Where do you want to go?", "(1) Choose a path to the east.", "(2) Choose a path to the north.", 6, 7},
        {"      ,_     _,\n      |\\\\___/\/|\n      |=6   6=|\n      \\=._Y_.=/\n       )  `  (    ,\n      /       \\  ((\n      |       |   ))\n     /| |   | |\\_/\/\n     \\| |._.| |/-`\n      '''   '''", "As you try your best to find their voices, the forest sounds are all you can hear.\nBirds chirping and leaves swaying in the wind make you take a minute to relax and approach the problem with a cold head.", "Then, all of a sudden, you hear your name being called in the distance.\nIt sounded like it was coming from the east, but it is really hard to tell.", "(1) Follow the sound and go east.", "(2) Investigate your surroundings", 6,4},
        {" ,_     _\n |\\\\_,-~/\n / _  _ |    ,--.\n(  @  @ )   / ,-'\n \\  _T_/-._( (\n /         `. \\\n|         _  \\ |\n \\ \\ ,  /      |\n  || |-_\\__   /\n ((_/`(____,-'", "You chose to go down a wide path heading east.\nIt is a nice open trail, and if you were with your family it would be a great time.\nBut you are not, which means danger could be lurking anywhere", "You want to avoid any potential trouble.\nHow are you going to go down this path?", "(1) Run as fast as possible.", "(2) Hide in the nearest bush, and plan every step carefully", 8, 9},
        {" ,_     _\n |\\\\_,-~/\n / _  _ |    ,--.\n(  @  @ )   / ,-'\n \\  _T_/-._( (\n /         `. \\\n|         _  \\ |\n \\ \\ ,  /      |\n  || |-_\\__   /\n ((_/`(____,-'", "You chose a hidden trail towards the north.\nIt is dark and oddly quiet.\nIn the distance you can see a nice bush.", "You are not really tired, but you do not know when you will get another chance to rest.", "(1) Go into the bush.", "(2) Keep walking and get out of the forest.", 9, 8},
        {"        _..---...,""-._     ,/}/)\n     .''        ,      ``..'(/-<\n    /   _      {      )         \\\n   ;   _ `.     `.   <         a(\n ,'   ( \\  )      `.  \\ __.._ .: y\n(  <\\_-) )'-.____...\\  `._   //-'\n `. `-' /-._)))      `-._)))\n   `...'  ", "You are now exhausted, but you made it to the end of the path.\nYou feel relieved, but there is no time to celebrate.\nYou must keep going and make it back before the end of the day.\nYou are heading east, along what seemed to be an old rocky path once.\nAs you are walking, you can hear the sound of a river more and more loudly.\nAnd soon enough, you find yourself standing in front of a river", "You suddenly realize how thirsty you are and stop to drink some water.\nThe old path seems to be going upriver to the north, but if you want to keep going east you have to cross the river.", "(1) Keep going along the path to the north.", "(2) Swim across the river and keep going east.", 14, 15},
        {" /\\___/\\\n \\/   \\/\n  \\~ ~/\n ==`^ ==\n  /   \\        |\\___/|\n /|   |        \\/- -\\/ ____...,...\n || - |         \\o o/             \\\n ||   |        ==`^ ==   ,        /\\\n ||| ||_            `.  / --- \\  / \\\\____/\/\n/\\||_|/\/         ;____,'      | /   ` ---\n\\_____/                    ;___/", "You approach the bush. This will give you enough time to make a proper plan.\nBut, as you lift the branches and step in, you see that there was someone else resting there too.", "An old fox was cautiously looking at you, as you stood there frozen in shock.\nYou can not read the expression on their face.", "(1) Run down the path as fast as possible.", "(2) Try to make friends with the fox.", 8, 10},
        {"     /\\_/\\ /\\_/\\\n     (^ ^) {@ @}\n     ==~== ==o==\n      \\@/   \\^/\n      |=|   ###_ \n(    /  \\  /    \\\n \  /   |  |     \\\n  )/ ||||  ||||(  \\   \\\n (( /||||  |||| \\  )   )\n   m !m!m  m!m! m-~(__/", "- You lost, kid? - the fox asks before you even get a chance to say hi.\nYou simply nod, still not sure whether this fox is friendly or not.\n- Do not worry. Where did you last see your family?\n- They set up a picnic somewhere in a forest clearing\n- Well then, you are not too far away.\n  The shortest way back is to go west.\n  You will cross a narrow path that is heading north.\n  Keep going straight ahead until you find a bush with bright yellow berries.\n  Then turn north and run straight until you reach them.\n  There are not many clearings in this forest, I am certain they should be there.\n- Thank you for the tip! - you say as you carefully get out of the bush.", "This advice could be really helpful, but you have never met that fox before.\nShould you listen to the fox or keep going down the path you started?", "(1) Listen to the fox and go west.", "(2) Keep going down the path.", 11, 8},
        {" /\\     /\\\n{  `---'  }\n{  O   O  }\n~~>  V  <~~\n \\  \\|/  /\n  `-----'____\n  /     \\    \\_\n {       }\\  )_\\_   _\n |  \\_/  |/ /  \\_\\_/ )\n  \\__/  /(_/     \\__/\n    (__/", "You turn west, cross the narrow path and keep walking straight.\nTime goes by and you are no longer sure whether this was a good decision.\nThen, right in front of you, you see a bush filled with bright yellow berries.\nThis must mean you were going the right way.", "As you look at the berries, you realize how hungry you are, and your stomach starts to growl.\nUnfortunately, you can not tell the difference between edible berries and the ones that are not edible.", "(1) Eat a few berries and head north.", "(2) Continue walking to the north.", 12, 13},
        {" /\\_/\\\n( o.o )\n > ^ <", "You ate some berries and you feel good.\nYou are no longer hungry, which makes you very happy.\nOnly thing that is left now is to find your family.\nYou start walking north, but very soon you start feeling dizzy.\nYou got very tired and suddenly fell asleep.\n\n . . . \n", "You wake up to a gust of wind.\nAs you open your eyes, you see that you are back in the nest.\nYou are not sure how much time has passed.\nThere is no hawk in sight, and you know you have to hurry up if you want to make it back in time.", "(1) You carefully sneak from one branch to another to get down from the tree without getting hurt.", "(2) You quickly jump down from the nest to buy time and stay unnoticed.", 2, 3},
        {"   /\\     /\\\n  {  `---'  }\n  {  O   O  } \n~~|~   V   ~|~~ \n   \\  \\|/  /  \n    `-----'__\n    /     \\  `^\\_\n   {       }\\ |\\_\\_   W\n   |  \\_/  |/ /  \\_\\_( )\n    \\__/  /(_E     \\__/\n      (  /\n       MM", "You keep walking, and soon enough you can hear voices calling your name.\nIt is your family.\nThe excitement overcomes you as you start rushing towards them.\nYou keep running faster and faster.\nYou never ran this fast before.\nIt feels amazing.\nAnd then you see them, straight ahead, and your heart fills with joy.", "You found your family!", "(1) Jump in their arms.", "(2) Run around their feet.", 0, 0},
        {"       _                        \n       \\`*-.                    \n        )  _`-.                 \n       .  : `. .                \n       : _   '  \\               \n       ; *` _.   `*-._          \n       `-.-'          `-.       \n         ;       `       `.     \n         :.       .        \\    \n         . \\  .   :   .-'   .   \n         '  `+.;  ;  '      :   \n         :  '  |    ;       ;-. \n         ; '   : :`-:     _.`* ;\n      .*' /  .*' ; .*`- +'  `*' \n      `*-*   `*-*  `*-*'", "You keep walking upriver along the old path.\nThe cool wind is blowing lightly and you enjoy your brisk walk.", "You reached a turning point.\nThe path is now headed west, and naturally you would keep walking that way, but on the right side there is a bridge over the river.\nIf you wanted to go east again you would not need to swim over now, since you can just walk across the bridge.", "(1) Stick to the old road and turn west.", "(2) Cross the bridge and go east again.", 16, 17},
        {"        ,-""""""-.\n     /\\j__/\\  (  \\`--.\n     \\`@_@'/  _)  >--.`.\n    _{.:Y:_}_{{_,'    ) )\n   {_}`-^{_} ```     (_/", "You stare into the water and feel terrified.\nHave you ever swam in a river before?\nThere is no time to think about that, so you jump straight in.\nYou try your best to swim across, but the farther you swim the harder it gets.\nYou are struggling more and more.\nSomewhere around the middle you can not swim any further.\nYou put all your efforts into holding your head above water.\nThe river is fast and it carries you down south.\nBut then, it starts to slow down a bit.\nYou can now float comfortably, and a few seconds later, you can feel the ground below you.\nYou stand up quickly, not believing your eyes.\nYou have been carried to an off-channel area.", "You quickly cross to the east coast.\nIt feels good to be on solid ground again.\nYou are exhausted, but not sure if you can afford to take a break.", "(1) Keep walking east", "(2) Take a short nap", 18, 19},
        {" /\\     /\\\n{  `---'  }\n{  O   O  }\n~~>  V  <~~\n \\  \\|/  /\n  `-----'____\n  /     \\    \\_\n {       }\\  )_\\_   _\n |  \\_/  |/ /  \\_\\_/ )\n  \\__/  /(_/     \\__/\n    (__/", "You are walking down the old path.\nIn front of you you can see the sun slowly setting.\nYou can not waste any time.\nStaring at the sky, you did not even notice the big fence ahead of you until you stood right in front of it.\The gate is open.\nIn the distance you can see the other fence, but to the right and left you cannot see where it ends.", "You do not have that much time left until it gets dark", "(1) Enter through the gate and go to the other side.", "(2) Try to go around the fence.", 22, 23},
        {"  ^___^\n ' o o '\n ===X===       _\n  ' '' '_     __\\\\\n /''''  \\___/ __/\n|           /\n('|')__\\   |\n'' ''(_____/", "You have successfully crossed the bridge.\nYou head east.\nThe grass feels nice and soft.\nYou notice the wind getting stronger.\nSuddenly, you come to a halt.\nIn front of you there is a huge cliff.\nThis is as far east as you can go.", "You feel discouraged and tired.\nWhat is your next move?", "(1) Take a nap.", "(2) Go back to the old path and head west.", 20, 16},
        {" |\\__/,|   (`\\\n |_ _  |.--.) )\n ( T   )     /\n(((^_(((/(((_/", "You head east.\nThe grass feels nice and soft.\nYou notice the wind getting stronger.\nSuddenly, you come to a halt.\nIn front of you there is a huge cliff.\nThis is as far east as you can go.", "You remember that the path on the other side of the river was going north.\nYou come back to the river.\nYou can think of only two options.", "(1) Go north along the river and try to keep the old path in sight.", "(2) Cross to the other side over the off-channel area, and walk down the old path", 21, 14},
        {"(:`--..___...-''``-._             |`._\n  ```--...--.      . `-..__      .`/ _\\  \n            `\\     '       ```--`.    />\n            : :   :               `:`-'\n             `.:.  `.._--...___     ``--...__      \n                ``--..,)       ```----....__,) ", "You wake up an hour later.", "You feel better, but could easily sleep for another hour.", "(1) Keep sleeping.", "(2) Start walking east.", 20, 18},
        {"                       /)\n              /\\___/\\ ((\n              \\`@_@'/  ))\n              {_:Y:.}_/\/\n    ----------{_}^-'{_}----------", "You wake up to a gust of wind.\nAs you open your eyes, you see that you are back in the nest.\nYou are not sure when did the hawk find you again, or how much time has passed.", "There is no hawk in sight, and you know you have to hurry up if you want to make it back in time.", "(1) You carefully sneak from one branch to another to get down from the tree without getting hurt.", "(2) You quickly jump down from the nest to buy time and stay unnoticed.", 2, 3},
        {"       _                        \n       \\`*-.                    \n        )  _`-.                 \n       .  : `. .                \n       : _   '  \\               \n       ; *` _.   `*-._          \n       `-.-'          `-.       \n         ;       `       `.     \n         :.       .        \\    \n         . \\  .   :   .-'   .   \n         '  `+.;  ;  '      :   \n         :  '  |    ;       ;-. \n         ; '   : :`-:     _.`* ;\n      .*' /  .*' ; .*`- +'  `*' \n      `*-*   `*-*  `*-*'", "You keep walking north, and come to a bridge.\nOn the other side of the river the path is turning west.", "Crossing the bridge seems less risky than crossing the river again.", "(1) Walk across the bridge and continue along the old path to the west.", "(2) Go back south to the off-channel area, cross the river and walk north down the old path.", 16, 14},
        {"                      /^--^\\     /^--^\\     /^--^\\\n                      \\____/     \\____/     \\____/\n                     /      \\   /      \\   /      \\\n                    |        | |        | |        |\n                     \\__  __/   \\__  __/   \\__  __/\n|^|^|^|^|^|^|^|^|^|^|^|^\\ \\^|^|^|^/ /^|^|^|^|^\\ \\^|^|^|^|^|^|^|^|^|^|^|^|\n| | | | | | | | | | | | |\\ \\| | |/ /| | | | | | \\ \\ | | | | | | | | | | |\n| | | | | | | | | | | | / / | | |\\ \\| | | | | |/ /| | | | | | | | | | | |\n| | | | | | | | | | | | \\/| | | | \\/| | | | | |\\/ | | | | | | | | | | | |\n#########################################################################\n| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |\n| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |", "You enter and start walking towards the other side.\nAs you approach the opposite fence you can see herds of sheep on the left and right.\nNone of them seem to care that you are there.", "You rushed and reached the other side.\nThis fence has no gate, but that is no problem for a cat.\nOnce you crawled through, you noticed that the sky got darker.", "(1) Keep walking.", "(2) Go to sleep.", 13, 25},
        {" _._     _,-'''`-._\n(,-.`._,'(       |\\`-/|\n    `-.-' \\ )-`( , o o)\n          `-    \\`_`'-", "You were walking for a while now and still cannot see the end of the fence.\nThe sun has just set.", "You can see some sheep laying in the grass inside the gate.\They seem harmless.", "(1) Keep walking around the fence.", "(2) Go inside, pass the sheep and walk out the other side.", 24, 22},
        {},
        {"              __..--''``---....___   _..._    __\n    /\/\/ /\/_.-'    .-/';  `        ``<._  ``.''_ `. / /\/ /\n   /\/\/_.-' _..--.'_    \\                    `( ) ) /\/ /\/\n   / (_..-' /\/ (< _     ;_..__               ; `' / /\/\/\n    / /\/ /\/ /\/  `-._,_)' /\/ / ``--...____..-' /\/\/ / /\/", "You went to sleep.", "No GGs for those who give up.", "(1) It is what it is.", "(2) Maybe next time.", 0, 0}

    };


    printf("The player is playing as a stray cat that has been adopted to a loving family. \nHowever, she got lost and has to find a way back to her owners.\n\n");
    printf("      \     /\\\n       )  ( ')\n      (  /  )\n        \(__)|\n\n\n");
    printf("Please enter your preferred cat name: ");

    char name[10];
    scanf("%s", name);

    printf("\nHello %s!\nWelcome to your adventure!\nOne nice summer day your family decided to go hiking in a mountain and they brought you along.\nAfter hours of walking you arrived at a forest clearing and set up a picnic.\nWhile everyone was resting and enjoying their food you got distracted by a small bird.\nYou played and ran around, and before you knew it, a hawk flew by and took you away.\nOnce you were in his nest you stayed still until the hawk flew away.\nYou need to find your way back to your family and avoid the dangers that lurk in the forest.\nMake wise choices and return safely.\nGood luck!\n\n\n", name);

    int answer, next = 1, counter = 0, comcount = 0, comtrack=0;

    while(next != 0) {

        if(next == 2 || next == 3) {
            counter++;
            if(counter >= 3) {
                printf("\n\nThe sun is setting.\nThe hawk came back and saw you on the ground.\nYou have not made it back to your family in time.\n");
                break;
            }
        }
        else if(next == 23 && counter == 2) {
            printf("\n\nThe sun is setting.\nYou start running, but still, the end is nowhere in sight.\nOnce you got around and kept running west, you finally found the forest clearing.\nBut, by the time you got there it was very late at night.\nNoone else was there.\n");
            break;
        }
        else if(next == 24) {
            printf("\n\nOnce you finally got around and kept running west, you found the forest clearing.\nBut, by the time you got there it was very late at night.\nNoone else was there.\n");
            break;
        }

        comcount ++;
        if (comcount % 4 == 0) {
            comcount = 0;
            printf("\n%s %s!", comments[comtrack], name);
            comtrack++;
        }

        printf("\n%s\n\n%s\n\n%s\n\n%s\n%s\n\n", story[next].img, story[next].text, story[next].question, story[next].answer1, story[next].answer2);
        scanf("%d", &answer);

        if(answer == 1) {next = story[next].res1;}
        else if(answer == 2) {next = story[next].res2;}
        else{printf("\nAnswer not valid! Let's try again!\n\n");}

    }

    printf("       ,\n       \`-._           __\n        \\  `-..____,.'  `.\n         :`.         /    \\`.\n         :  )       :      : \\\n          ;'        '   ;  |  :\n          )..      .. .:.`.;  :\n         /::...  .:::...   ` ;\n         ; _ '    __        /:\\\n         `:o>   /\\o_>      ;:. `.\n        `-`.__ ;   __..--- /:.   \\\n        === \\_/   ;=====_.':.     ;\n         ,/'`--'...`--....        ;\n              ;                    ;\n            .'                      ;\n          .'                        ;\n        .'     ..     ,      .       ;\n       :       ::..  /      ;::.     |\n      /      `.;::.  |       ;:..    ;\n     :         |:.   :       ;:.    ;\n     :         ::     ;:..   |.    ;\n      :       :;      :::....|     |\n      /\\     ,/ \\      ;:::::;     ;\n    .:. \\:..|    :     ; '.--|     ;\n   ::.  :''  `-.,,;     ;'   ;     ;\n.-'. _.'\\      / `;      \\,__:      \\\n`---'    `----'   ;      /    \\,.,,,/\n                   `----`              ");
    printf("\nGame over.\nThanks for playing!");

    return 0;
}
