#include <iostream.h>
#include <graphics.h>

int gameno,a=0;

extern void descreen();
void home();
void recommend(int,int);
extern void processing(int);
void action(int,int);
void RPG(int,int);
void driving(int,int);
void fighting(int,int);
void shooting(int,int);
void sports(int,int);
void strategy(int,int);
void del();
extern void coninfo();
extern void abtus();
extern void CT();
extern void help();
extern void ccarddet();
extern void top();
extern int confirm(int);
extern int main();
extern void updatefunds();



void outintxy(int x,int y,int inttoconvert)
{
     char intAsString[10];
     itoa(inttoconvert,intAsString,10);
     outtextxy(x,y,intAsString);
}

class games
{
      char name[40];
      char image[60];
      int cost;
      
      public:
             char description[1400];
             char* retname()
             {
                  return name;
             }
             char* retimage()
             {
                   return image;
             }
             int retcost(int x)
             {
                 cost=x;
             }
             void outparaxy(int x,int y,int size, char arr[])
             {
                  int j=0;
                  char arr1[72];
                  for(int i=0;arr[i]!='\0';y=y+size)
                  {
                          for(j=0;(j<72)&&(arr[i]!='\0');j++,i++)
                          {
                                                                 if((j>62) && (arr[i-1]==' '))
                                                                 break;
                                                                 arr1[j]=arr[i];
                          }
                          arr1[j]='\0';
                          outtextxy(x,y,arr1);
                  }
             }             
             void display()
             {
                  descreen();
                  readimagefile(image,20,170,200,500);
                  settextstyle(0,0,2);
                  setbkcolor(1);
                  outparaxy(240,250,20,description);
                  settextstyle(10,0,4);
                  setbkcolor(15);
                  setcolor(4);
                  outtextxy(400,135,name);
                  
                  setbkcolor(2);
                  settextstyle(1,0,3);
                  outtextxy(40,530,"Rs.");
                  outintxy(95,530,cost);
                  
                  int x,y;
                  
                  x = getmaxx( );
                  y = getmaxy( );
    
                  setmousequeuestatus(WM_LBUTTONDOWN);
    
                  while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >0 && x < 220 ) && ( y > 0 && y< 125))
                                        {
                                              closegraph();
                                              home();
                                              recommend(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                              a=1;
                                              processing(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                                        if((x >18 && x < 202 ) && ( y > 580 && y<630))
                                        {
                                              closegraph();
                                              initwindow(1275,700);
                                              setfillstyle(1,1);
                                              floodfill(1,1,1);
                                              
                                              settextstyle(1,0,7);
                                              setcolor(4);
                                              setbkcolor(1);
                                              outtextxy(440,100,"Rs.");
                                              outintxy(600,100,cost);
                                              
                                              int c=cost;
                                              if(!confirm(c))
                                              {
                                                  settextstyle(1,0,6);
                                                  setcolor(15);
                                                  setbkcolor(1);
                                                  outtextxy(200,300,"Sorry you do not have enough");
                                                  outtextxy(200,500,"  Funds to buy this game ");
                                                  delay(3000);
                                                  closegraph();
                                                  home();
                                                  recommend(10,11);
                                              }
                                        } 
                     }
                     if(a)
                     main();
                     
             }
}game[30];
       

int main1()
{
    int x=0,y=0;
    
    strcpy(game[0].retname(),"God of War: Ghost of Sparta");
    game[0].retcost(1999);
    strcpy(game[0].retimage(),"God of War Ghost of Sparta.jpg");
    strcpy(game[0].description,"Set in the realm of Greek mythology, God of War: Ghost of Sparta is a single-player game that allows players to take on the powerful role of Spartan warrior Kratos. This new adventure picks up after the first God of War concludes, telling the story of Kratos' ascension to power as the God of War. In his quest to rid himself of the nightmares that haunt him, Kratos must embark on a journey that will reveal the origins of lost worlds, and finally answer long-awaited questions about his dark past. Armed with the deadly chained Blades of Chaos, he will have to overcome armies of mythological monsters, legions of undead soldiers, and amazingly dangerous and brutal landscapes throughout his merciless quest. God of War: Ghost of Sparta features fluid, life-like characters, a robust weapon system, new magical powers, weapons and navigational abilities, many more enemies on screen, and a greater number of boss encounters, truly bringing the experience to life, all while on the go.");
    
    strcpy(game[1].retname(),"God of War: Chains of Olympus");
    game[1].retcost(1699);
    strcpy(game[1].retimage(),"God of War Chains of Olympus.jpg");
    strcpy(game[1].description,"As many who know the tales of the God of War know, Kratos, after being deceived into killing his wife and daughter, denounced his service to Ares. In order to seek absolution from his past sins, the Ghost of Sparta pledged himself as a champion to the Gods for the years to follow - these brutal crusades, in the name of Olympus, became legendary throughout the ancient world. Experience Kratos' journey during the 10 years of servitude to the Gods of Olympus. In God of War: Chains of Olympus, Kratos will venture to lands that no mortal has ever walked upon. With the world plunged in eternal darkness and the Gods rendered powerless, Kratos will ultimately be forced to choose between his own personal redemption and saving the ancient world from certain destruction. Developed from the outset as an original story, God of War: Chains of Olympus delivers highly detailed graphics, incredible animation detail and yet another adventure in the dark and brutal world of Greek mythology.");
    
    strcpy(game[2].retname(),"Grand Theft Auto: Chinatown Wars ");
    game[2].retcost(1299);
    strcpy(game[2].retimage(),"Grand Theft Auto Chinatown Wars.jpg");
    strcpy(game[2].description,"Grand Theft Auto: Chinatown Wars follows the story of Huang Lee, a young Triad who travels to Liberty City after the mysterious death of his father. Within the game, players will navigate their way through the streets as they uncover the truth behind an epic tale of crime and corruption within the Triad crime syndicate, delivering the    unprecedented amount of depth that has become a true trademark of the franchise. Specifically built for the PSP platform with upscaled widescreen graphics, enhanced lighting and animation; and including all-new story missions; this version of Grand Theft Auto: Chinatown Wars will take full advantage of the power of the PSP system");

    strcpy(game[3].retname(),"Metal Gear Solid: Peace Walker");
    game[3].retcost(1999);
    strcpy(game[3].retimage(),"Metal Gear Solid Peace Walker.jpg");
    strcpy(game[3].description,"Stories tell of a legendary soldier who, with Metal Gear in his command, had once waged war against the world. His name was Naked Snake, a.k.a. Big Boss. Now, in response to a world hungry for answers, the truth behind this legend will finally be told. The era is the 1970s. Big Boss has stations his Soldiers without Borders in Columbia, South America, where he was approached by a visitor from Costa Rica, a Nation without a Military. In the wake of the Cuban Missile Crisis, as Latin America became a key to maintaining the power balance between East and West, Costa Rica has miraculously managed to maintain its peace and neutrality. However, in various regions of the country, a mysterious armed force seemed to be engaging in suspicious activities. Now, to preserve peace in this nation without a military, the Soldiers without Borders move into action. In time, they would come to be known as the founders of Outer Heaven. Developed by legendary Hideo Kojima -- the mastermind behind the most successful video game tactical-espionage series of all time -- this game lets players take control of the famed Naked Snake at a critical junction in modern history. Advanced co-operative techniques allows multiple players to sneak into the fray and accomplish the mission together.");
    
    strcpy(game[4].retname(),"Dissidia 012 Final Fantasy");
    game[4].retcost(1699);
    strcpy(game[4].retimage(),"Dissidia 012 Final Fantasy.jpg");
    strcpy(game[4].description,"The divine conflict between harmony and discord rages on, the fate of the world its promised prize. Fighting to secure it are brave souls summoned for that solitary purpose. These warriors, relying on what fragments of their shattered memories remain, fight to end the conflict -- and for a chance to return home, to the worlds they each once knew. The dramatic, high-intensity action game that brought together an all-star cast of Final Fantasy characters is back with new enhancements. Dissidia 012 Final Fantasy adds new game modes, story missions, items, alternate costumes and combat features, expanding upon the action and excitement of Dissidia Final Fantasy in every way. This second Dissidia game offers players a unique combination of action-packed fighting game elements and RPG-based character development. Get ready for a new round of all-out brawling with some of the most memorable characters in the gaming world!");
    
    strcpy(game[5].retname(),"Final Fantasy IV: The Complete Collection");
    game[5].retcost(1599);
    strcpy(game[5].retimage(),"Final Fantasy IV The Complete Collection.jpg");
    strcpy(game[5].description,"Offering the ultimate compilation of the FF IV saga, Final Fantasy IV Complete Collection offers Final Fantasy IV and its sequel The After Years into one package. A cast of unforgettable characters fight through one of the grandest stories ever told with stunning new graphics, a re-arranged, award-winning soundtrack, and bonus game features that provide the absolute FINAL FANTASY IV experience. In Final Fantasy IV the kingdom of Baron begins employing unprovoked force to seize powerful crystals from peaceful nations. The dark knight Cecil - Lord Captain of Baron's elite force, the Red Wings - is ordered by his king to obtain the Crystals, but soon begins to question the monarch's motives. Enraged, the king accuses him of disloyalty, strips Cecil of his command, and sends him off to slay a mysterious beast that lurks in the nearby Valley of Mist. Cecil embarks on a fateful journey that will bring trials, betrayals, friendship, loss and self-discovery. Can Cecil open his eyes and become the man of honor that he must be? Final Fantasy IV: The After Years, unravel a mystery told through the intertwining stories of a familiar cast of characters, and complete the Final Fantasy IV experience.");
    
    strcpy(game[6].retname(),"Half-Minute Hero");
    game[6].retcost(899);
    strcpy(game[6].retimage(),"Half-Minute-Hero.jpg");
    strcpy(game[6].description,"Throughout time, heroes and legends have risen above the chaos, only to eventually disappear into the ashes. As the last wandering sage and final hope for humanity, it is up to the protagonist to somehow transcend time and death to unite these legends and their unique powers in one last battle against the Ultimate Evil Lord. An unorthodox approach to traditional RPGs, Half-Minute Hero combines adventure, an epic storyline, legendary characters and a punishing countdown clock to destruction, to create an adrenaline pumping experience that will blow past conventional fantasy games. Choose between four modes of accelerated gameplay, each complete with original quests, enemies and attacks. Hero Mode consists of random battles with classic RPG leveling-up elements, Evil Lord Mode involves a high degree of strategy to summon the appropriate monsters against the varying oncoming enemies, Princess Mode involves fast-paced shooting action as you guide the princess safely to and from her castle, and Knight Mode challenges the player to protect the sage in any way possible, including carrying the sage away from danger, clinging to monsters to halt their movement, or even throwing yourself at enemies to cause physical damage. Each of the gameplay modes contains 30 stages in which players have 30 seconds, or a half-minute, to complete their tasks.");

    strcpy(game[7].retname(),"Ape Quest ");
    game[7].retcost(499);
    strcpy(game[7].retimage(),"Ape Quest.jpg");
    strcpy(game[7].description,"A unique spin-off for the Ape Escape franchise, The Record of Piposaru War is a RPG featuring the mad monkeys as your playable party. The ape kingdom is cursed and it's up to you to save it! Battle your way through evil minions by completing an endless variety of mini-games and powering up your character RPG-style. Ape Quest is provided as a downloadable game on PlayStation Network and is available as a full game or as a three-chapter (Blue, Gold and Red) download tied together with a free Starter Pack. Each chapter features mini-games, weapons, items and other content. Two chapters - either Gold or Blue, plus Red - are required to complete the game and see the ending.");

    strcpy(game[8].retname(),"X-Men Legends II: Rise of Apocalypse");
    game[8].retcost(999);
    strcpy(game[8].retimage(),"X-Men Legends II Rise of Apocalypse.jpg");
    strcpy(game[8].description,"The X-Men team up with their sworn enemies, Magneto and his Brotherhood, to stop the greatest threat of all: Apocalypse. Activision's X-MEN LEGENDS II: RISE OF APOCALYPSE for the PSP allows players to control both good and evil mutants in one of the most popular franchises of all time. The game begins with X-Men Wolverine, Storm, and Cyclops and the Brotherhood's Magneto, Sabertooth, and Mystique saving Professor X from Apocalypse's prison. Apocalypse, one of the most powerful mutants in the X-Men series, has destroyed the mutant haven of Genosha and kidnapped four powerful mutants, including Quicksilver, Magneto's son. He plans to extract their powers and incorporate them into his own, making him unstoppable. Players have 15 mutants to select their party of four from, including Gambit, Toad, Bishop, and Pyro. The game is divided into five stages, and the end of the first four, players will face off against one of Apocalypse's powerful henchmen, the Horsemen. There are also many more cameo appearances scattered throughout the game, and a number of unlockable extras like hidden characters, classic uniforms, and other skins. Players can also play the game cooperatively, with up to four players joining in the mutant melee. But whether alone or with friends, X-MEN LEGENDS II: RISE OF APOCALYPSE is full of all the action, excitement, and mutant powers X-MEN fans love.");
    
    strcpy(game[9].retname(),"Wipeout Pulse");
    game[9].retcost(999);
    strcpy(game[9].retimage(),"Wipeout Pulse.jpg");
    strcpy(game[9].description,"SCE Studios Liverpool brings the future back with this second Wipeout game for the PSP. This entry in the racing series features 24 new reversible circuits, a load of fresh high-speed vehicles and some deadly new weaponry. There's also a new track feature called the Mag-Strip, which acts like a magnet and temporarily locks ships to the levels, enabling exciting things like loops and vertical drops. Newcomers to the WipEout franchise will likely revel over the introduction of a training mode, taking you through the basics. Most exciting of all is a new online multiplayer feature, where racers can battle each other at amazing speeds. Also look for a host of new downloadable content.");
    
    strcpy(game[10].retname(),"Gran Turismo");
    game[10].retcost(1899);
    strcpy(game[10].retimage(),"Gran Turismo.jpg");
    strcpy(game[10].description,"Developed exclusively for PSP by the internal team of designers and engineers at Polyphony Digital, Gran Turismo is built for optimal performance and fun racing excitement on the portable platform. Consistently setting the bar in terms of quality of design and physics technology with every product release, Gran Turismo on the PSP is no exception and offers an authentic and accessible racing product for the series' millions of fans and newcomers alike. Gran Turismo features more than 800 vehicle models from the world's top manufacturers (over 4,500 total paint variations) and more than 30 tracks (60+ total layouts), including famous world circuits, city courses and other environments. Featuring exciting gameplay and game modes to suit all levels of play, Gran Turismo is a great introduction to the best-selling series for newcomers. Additionally, seasoned Gran Turismo fans will recognize the depth of content and unparalleled visuals the series is known for, including graphics running at a stunning 60 frames per second. Players can progress and acquire cars in Challenge Mode throughout more than 100 events in, or they can explore different tracks and circuits in Arcade Mode.");
    
    strcpy(game[11].retname(),"MotorStorm: Arctic Edge");
    game[11].retcost(1899);
    strcpy(game[11].retimage(),"MotorStorm Arctic Edge.jpg");
    strcpy(game[11].description,"MotorStorm Arctic Edge sees the music, the festival and the brutal off-road racing arrive in the breathtaking yet lethal and unpredictable setting of Alaska. With temperatures plummeting, sudden avalanches, broken ice bridges, and three different racing altitudes, this is possibly the most inhospitable environment the MotorStormers have ever had to deal with. With grip at a premium, and in addition to the six existing classes from the original MotorStorm, two new vehicles have been introduced to combat the ice, the cold and the snow - the Snowcat and the Snow Machine. One has the power and size to blast through packed snow, whilst the other has the grip and pace to combat most of what the sub-zero conditions can throw at it.A further new introduction to the MotorStorm festival is personalisation of your vehicle class. Each vehicle in the game has a selection of different parts - for example wheels, exhausts, spoilers - liveries and stickers to choose from. Players can also create their own liveries from a set of base patterns and decals. There are so many combinations that each player could own a unique vehicle!");
    
    strcpy(game[12].retname(),"Burnout Dominator");
    game[12].retcost(1299);
    strcpy(game[12].retimage(),"Burnout Dominator.jpg");
    strcpy(game[12].description,"Burnout Dominator challenges gamers to face off against a series of hot-blooded rivals in brutal tests of aggressive driving techniques where performing burnouts gives you the advantage and multiplies your score potential. Slam your rivals through barriers to unlock shortcuts, experience the thrill of boost chaining for outrageous racing speed, choose our vehicle for battle, and much more!");
    
    strcpy(game[13].retname(),"WWE SmackDown vs. Raw 2011");
    game[13].retcost(1999);
    strcpy(game[13].retimage(),"WWE SmackDown vs. Raw 2011.jpg");
    strcpy(game[13].description,"WWE SmackDown vs. Raw 2011 empowers players more than ever to to define their gameplay experiences in a dynamic and ever-changing WWE. Along the way, gameplay scenarios change based on player decisions, allowing for more spontaneous WWE action in and out of the ring. Players can also enjoy a greater level of interactivity and have increased control of their destinies in the game's popular Road to WrestleMania story-driven mode. WWE SmackDown vs. Raw 2011 has more creative tools than ever to customize their Superstars, finishing moves and story designs. In addition, searching and sharing content are greatly simplified with improvements to the highly regarded WWE Community Creations feature, which generated nearly 10 million downloads, including more than 7.5 million Created Superstars, 500,000 story designs and 500,000 finishing moves in its franchise debut. WWE SmackDown vs. Raw 2011 also features more than 70 of today's prominent WWE Superstars and Divas. In addition, a new physics system will ensure all matches and object interactions look and feel unique, dynamic and unpredictable to capture the full essence of the WWE Universe.");
    
    strcpy(game[14].retname(),"Dragon Ball Z: Tenkaichi Tag Team");
    game[14].retcost(1499);
    strcpy(game[14].retimage(),"Dragon Ball Z Tenkaichi Tag Team.jpg");
    strcpy(game[14].description,"For the first time ever Dragon Ball Z fans can enter into high-impact two vs. two combat in Dragon Ball Z: Tenkaichi Tag Team for the PSP system. Play solo or team up via Ad Hoc mode to tackle memorable battles in a variety of single player and multiplayer modes, including Dragon Walker, Battle 100, and Survival Mode. Dragon Walker Mode takes fans through the entire epic Dragon Ball Z story arc from the Saiyan saga to the Majin Buu saga. Battle 100 Mode tasks players to relive the most epic encounters and newly created situations from the Dragon Ball Z world in ever increasingly difficult situations. With more than 70 playable and deeply customizable characters, multiple modes, and Ad Hoc Party gameplay, Dragon Ball Z: Tenkaichi Tag Team is chock full of gameplay for your portable PSP system.");
    
    strcpy(game[15].retname(),"Mortal Kombat: Deception");
    game[15].retcost(499);
    strcpy(game[15].retimage(),"Mortal Kombat Deception.jpg");
    strcpy(game[15].description,"The sixth episode of the violent and visceral fighting series from Midway pounces on the success of Deadly Alliance with Mortal Kombat: Deception -- the first online game in the history of the franchise. Destructible environments and breakthrough walls hearken back to the days of MK3's surprise smash-through stages, while favorite returning characters like Scorpion, Sub-Zero, Mileena and Baraka join all-new fighters Darrius, Dairou, and Kobra in a battle to save the realms. In all, the game boasts more than 24 different kombatants, in addition to an enormous Konquest adventure mode, a Kombat Chess mini-game, and an homage to Capcom's Puzzle Fighter series as extras. Deception contains several new features in the series, such as chess and puzzle games with the MK characters and an online mode.");
    
    strcpy(game[16].retname(),"WWE All Stars");
    game[16].retcost(1199);
    strcpy(game[16].retimage(),"WWE All Stars.jpg");
    strcpy(game[16].description,"WWE All Stars is an over-the-top, arcade-style beat-down featuring the WWE's past and present superstars of the ring. WWE All Stars delivers one of the greatest rosters ever assembled in a wrestling-centric videogame. Renowned WWE Legends will align with today's most prominent WWE Superstars, inviting players to generate fantasy matches and ultimately determine the greatest competitors of all time. In addition, each WWE Legend and WWE Superstar will boast a distinctive and highly stylized appearance, adding to the overall atmosphere and intrepid attitude exuding from the on-screen action. WWE All Stars encompasses a fluid, intuitive and original gameplay style, creating a highly competitive environment and an engaging spectacle. Packed with high-flying, hard hitting and over the top action, players will explore a variety of responsive quick grapples, strong grapples, standing and running attacks, as well as combination sequences. Every WWE Legend and WWE Superstar on the power-packed roster will be equipped with individual abilities, signature moves and renowned finishers to create the ultimate in-ring experience.");
    
    strcpy(game[17].retname(),"Resistance: Retribution");
    game[17].retcost(1899);
    strcpy(game[17].retimage(),"Resistance Retribution.jpg");
    strcpy(game[17].description,"A new chapter in the epic PlayStation 3 franchise, Resistance: Retribution takes on a third-person perspective in the ongoing fight with the Chimera. Set in the weeks after Resistance: Fall of Man, Resistance: Retribution follows the story of former British Marine James Grayson. After a personal tragedy -- he is forced to kill his own brother inside a Chimeran conversion center - Grayson goes on a vendetta to destroy every conversion center he can find. Eventually Grayson learns that his efforts have been futile ... in Western Europe the Chimera have evolved a new method of converting humans to aliens. The European resistance -- the Maquis -- enlist Grayson's help, and he joins Cartwright and Parker in Operation Overstrike. The war to retake the European continent has begun.");
    
    strcpy(game[18].retname(),"SOCOM: U.S. Navy SEALs Fireteam Bravo 3");
    game[18].retcost(1299);
    strcpy(game[18].retimage(),"SOCOM U.S. Navy SEALs Fireteam Bravo 3.jpg");
    strcpy(game[18].description,"Alexander Gozorov is a man that does not want to be found, an ex-KGB agent with ties to the Russian mafia, he has killed everyone we have sent to find him. Gozorov is believed to have information on a major imminent attack against western interests. Time is running out and your 4-man team of U.S Navy SEALs is sent in to track him down.Created with the support of the U.S. Naval Special Warfare Command, SOCOM U.S. Navy SEALs: Fireteam Bravo 3 continues to build on the legacy of the critically-acclaimed and hugely popular Fireteam Bravo series.The game has players lead a 4-man fireteam of U.S. Navy SEALs in an action-packed military hunt for weapons of mass destruction and an ex-KGB agent. Not only as the SEAL Commander will you be supported by 3 AI teammates executing the very latest SOCOM team-based tactical, stealth and action maneuvers, but you can easily bring your friends online by playing in a new 4-player co-op mode throughout the single player campaign.");
    
    strcpy(game[19].retname(),"Medal of Honor: Heroes 2");
    game[19].retcost(1299);
    strcpy(game[19].retimage(),"Medal of Honor Heroes 2.jpg");
    strcpy(game[19].description,"It's June 6th, 1944, and the war is in your hands. Step into the boots of OSS Operative John Berg and infiltrate Normandy from behind enemy lines to undermine the Nazi regime.Choose to tackle all-new missions in traditional single player campaign or engage in massive, 32-player online, continuous-joining multiplayer battles where you can jump into the battle at any time.");
    
    strcpy(game[20].retname(),"Call of Duty: Roads to Victory");
    game[20].retcost(699);
    strcpy(game[20].retimage(),"Call of Duty Roads to Victory.jpg");
    strcpy(game[20].description,"Featuring all-new missions, never-before seen in a Call of Duty game, Call of Duty: Roads to Victory thrusts players into the boots of an 82nd Airborne Division infantry soldier, a Canadian First Army rifleman (both new to the franchise) and an elite British Parachuting Regiment commando.Featuring a completely unique set of challenges that include mounted machine gun battles, sniper encounters and aircraft attacks, as well as multiplayer warfare for up to six players (ad-hoc wireless), Call of Duty: Roads to Victory enlists handheld gamers into the fast-paced action and adrenaline-pumping intensity of Call of Duty.");
    
    strcpy(game[21].retname(),"FIFA 11");
    game[21].retcost(1799);
    strcpy(game[21].retimage(),"FIFA 11.jpg");
    strcpy(game[21].description,"Play on until the final whistle with the 2011 edition of EA's officially-licensed FIFA game series. FIFA Soccer 11 delivers a true soccer experience with authentic club and leagues licenses and gameplay refinements and innovations that combine to create the complete soccer simulation.FIFA 11 reinvents player authenticity -- on and off the ball -- for every player and at every position on the pitch with Personality+, an all-new feature that sees individual abilities reflected in game, enabling clear differentiation for every player. With Personality+ a footballer's abilities on the pitch is mirrored authentically in game, creating individual personalities. Goalkeepers have also been injected with Personality+, so whether acrobatic or traditional, will dictate his style in game. FIFA 11 also introduces new Pro Passing where pass accuracy is determined by a gamer's ability on the control pad, and player skill, situation and urgency on the pitch, yielding a deeply rewarding passing system. Plus, a series of new customization tools will enable fans to transform FIFA 11 in new and personally meaningful ways. Assign customized chants for every team and league and play music tracks from your existing library from within the game.");
    
    strcpy(game[22].retname(),"NBA LIVE 10");
    game[22].retcost(1599);
    strcpy(game[22].retimage(),"NBA live 10.jpg");
    strcpy(game[22].description,"Elevate your game to the highest level with NBA LIVE 10. Be a Pro with new passing and shot features, and an improved playcalling system that gives you more control than ever before. With improved realism on both ends of the court and simplified gameplay controls, play your way to NBA super stardom by developing your game throughout an entire career with achievement-based incentives. NBA LIVE 10 -- the authentic basketball experience.");
    
    strcpy(game[23].retname(),"Madden NFL 11");
    game[23].retcost(1199);
    strcpy(game[23].retimage(),"Madden NFL 11.jpg");
    strcpy(game[23].description,"Madden NFL 11 re-energizes the game of football with a fun and exhilarating experience to ignite the passion of every NFL fan. Whether you're rekindling an old rivalry, putting your spin on the best moments of 2009, or building the ultimate dynasty in Franchise mode, Madden NFL 11 makes every day feel like Sunday. Experience the passion for football shared by Gus Johnson and Cris Collinsworth as they call the action on the field. Fight for fumbles, design your own plays, and feel what it's like to be an NFL superstar with Madden NFL 11, the ultimate NFL experience on PlayStation Portable.");

    strcpy(game[24].retname(),"Brian Lara Pressure Play");
    game[24].retcost(1299);
    strcpy(game[24].retimage(),"Brian Lara Pressure Play.jpg");
    strcpy(game[24].description,"Brian Lara 2007 Pressure Play is specifically designed for PSP gaming with an emphasis on new burst-play cricket challenges and delivers all the exciting and accessible cricket gameplay that the series is renowned for. The game leads with the Pressure Play Mission Mode a new and exclusive game mode consisting of bite-sized burst-play challenges that cover every nuance of cricket. Progressing from easier bowl a maiden over challenges for the beginner to more difficult one-ball-left-to-win scenarios, Pressure Play allows the player to train and then master the sport of cricket via specific pressurised objectives.The game also features a full ICC Cricket World Cup 2007 mode, an ad-hoc Multiplayer mode in which 2 players can compete wirelessly in a one-on-one ICC Cricket World Cup 2007 warm-up match, and more.");
    
    strcpy(game[25].retname(),"Super Pocket Tennis ");
    game[25].retcost(699);
    strcpy(game[25].retimage(),"Super Pocket Tennis.jpg");
    strcpy(game[25].description,"Prepare your paddle for brick-breaking RPG action! 7 Dooms exist in this world, with legendary monsters waiting for your challenge! Turn your system on its side and operate the dragon paddle to fight through 120 challenging stages of brick-breaking action. Earn experience points and increase the strength and spell powers of your paddle as you take on a totally unique gaming experience mixing classic brick-breaking gameplay with RPG elements.");

    strcpy(game[26].retname(),"Patapon 3");
    game[26].retcost(1699);
    strcpy(game[26].retimage(),"Patapon 3.jpg");
    strcpy(game[26].description,"The brave Patapon tribe cross the recently constructed bridge at the end of Patapon 2. A mysterious box lies in their path and they combine their efforts to break it open. They successfully break open the box to release… the seven evil spirits! All the Patapons are turned to stone except for Hatapon. He has escaped the tragedy and finds a silver Hoshipon at the bottom of the box which gives him a new power to defeat the evil spirits: Superhero Patapon.The third in a series of innovative, rhythm-based 2D action games, Patapon 3 introduces this new Superhero Patapon, which players can use to head into musical battle, devastating opponents with deadly, rhythmic attacks. Players will go on multiplayer Quest with friends or go head-to-head on an epic four-against-four battle against other Patapon clans with network play (up to eight players). Patapon is a fully customizable experience, with different weapons and abilities that combine music and dance to create the only multiplayer portable adventure full of rhythm and war.");
    
    strcpy(game[27].retname(),"Final Fantasy Tactics");
    game[27].retcost(999);
    strcpy(game[27].retimage(),"Final Fantasy Tactics.jpg");
    strcpy(game[27].description,"In days now long past, the War of the Lions rent the land of Ivalice in two. And it is here that two young men of note first stepped onto history's stage. The first is a man named Delita Heiral, the hero who would draw the curtain on the War of the Lions, this dark act of Ivalice's history. The other, whose role is now forgotten, is a man by the name of Ramza Beoulve. Peer through the eyes of these two young men, and uncover the secrets that lie hidden within history's darkened folds.Originally released in 1997, Final Fantasy Tactics: The War of the Lions is a portable update on the classic turn-based strategy game that gave birth to the world of Ivalice. New features include all-new CG sequences, all-new jobs, new 16:9 widescreen presentation, new head-to-head multiplayer and new storyline elements that refine the genesis of the Ivalice Alliance.");
    
    strcpy(game[28].retname(),"Chessmaster");
    game[28].retcost(299);
    strcpy(game[28].retimage(),"Chessmaster.jpg");
    strcpy(game[28].description,"Josh Waitzkin, International Master and eight-time National Chess Champion, coaches players to grasp the basic fundamentals of chess and to master the game through exciting courses and tutorials taken directly from his groundbreaking book, The Art of Learning.");
    
    
    home();
    recommend(10,11);

    system("pause");
}

void del()
{
     recommend(1,1);
     strategy(1,1);
     sports(1,1);
     shooting(1,1);
     fighting(1,1);
     driving(1,1);
     RPG(1,1);
     action(1,1);
}
void home()
{
     initwindow(1275,700);
     setfillstyle(1,1);
     floodfill(100,100,1);
    
    setcolor(0);
    rectangle(0,0,220,125);                                    //Top options                         
    rectangle(220,0,430,125);
    rectangle(430,0,640,125);
    rectangle(640,0,850,125);
    rectangle(850,0,1060,125);
    rectangle(1060,0,1275,125);
    rectangle(1060,0,1275,40);
    moveto(1225,0);
    lineto(1225,40);
    moveto(220,125);
    lineto(220,700);
    rectangle(20,135,200,185);                                  //Side options
    rectangle(20,205,200,255);
    rectangle(20,275,200,325);
    rectangle(20,345,200,395);
    rectangle(20,415,200,465);
    rectangle(20,485,200,535);
    rectangle(20,555,200,605);
    rectangle(20,625,200,675);
    
    
    setfillstyle(1,7);
    floodfill(230,10,0);
    floodfill(440,10,0);
    floodfill(650,10,0);
    floodfill(860,10,0);
    floodfill(1070,10,0);
    floodfill(1070,60,0);
    floodfill(25,140,0);
    floodfill(25,210,0);
    floodfill(25,280,0);
    floodfill(25,350,0);
    floodfill(25,420,0);
    floodfill(25,490,0);
    floodfill(25,560,0);
    floodfill(25,630,0);
    
    setfillstyle(1,0);
    floodfill(10,10,0);
    setfillstyle(1,4);
    floodfill(1250,10,0);
    setfillstyle(1,2);
    floodfill(5,150,0);
    setbkcolor(0);
    setcolor(9);
    settextstyle(0,0,4);
    outtextxy(65,10,"The");
    outtextxy(15,45,"V-Play");
    outtextxy(30,80,"Store");
    
    setbkcolor(7);
    setcolor(0);
    
    settextstyle(0,0,3);
    outtextxy(240,30,"Console");
    outtextxy(280,65,"Info");
    
    outtextxy(475,30,"About");
    outtextxy(510,65,"Us");
    
    outtextxy(1085,55,"Account");
    outtextxy(1085,90,"Details");
    
    settextstyle(0,0,2);
    outtextxy(680,30,"Copyright");
    outtextxy(725,55,"And");
    outtextxy(680,80,"Trademark");
    
    outtextxy(1082,12,"Sign Out");
    
    outtextxy(25,150,"We Recommend");
    
    outtextxy(65,220,"Action");
    
    outtextxy(85,290,"RPG");
    
    outtextxy(55,360,"Driving");
    
    outtextxy(55,430,"Fighting");
    
    outtextxy(55,500,"Shooting");
    
    outtextxy(70,570,"Sports");
    
    outtextxy(60,640,"Strategy");
    
    settextstyle(0,0,5);
    outtextxy(859,42,"HELP!");
    
    setbkcolor(4);
    outtextxy(1230,0,"X");
}
     

void recommend(int i,int j)
{
    int x=0,y=0; 
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(575,150,"We Recommend");
    moveto(575,190);
    lineto(890,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(350,300,"God of War");
    outtextxy(325,325,"Ghost of Sparta");
    
    outtextxy(350,400,"God of War");
    outtextxy(300,425,"Chains of Olympus");
    
    outtextxy(320,500,"Metal Gear Solid");
    outtextxy(350,525,"Peace Walker");
    
    outtextxy(950,300,"Gran");
    outtextxy(925,325,"Turismo");
    
    outtextxy(825,400,"WWE Smackdown vs");
    outtextxy(920,425,"Raw 2011");
    
    outtextxy(915,500,"Resistance");
    outtextxy(910,525,"Retribution");
    
    if((i==10) && (j==11))
    {                                                            
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >320 && x < 600 ) && ( y > 300 && y< 350))
                                        {
                                              game[0].display();
                                        }
                                        if((x >320 && x < 600 ) && ( y > 400 && y< 450))
                                        {
                                              game[1].display();
                                        } 
                                        if((x >320 && x < 600 ) && ( y > 500 && y< 550))
                                        {
                                              game[3].display();
                                        }
                                        if((x >900 && x < 1080 ) && ( y > 300 && y< 350))
                                        {
                                              game[10].display();
                                        }
                                        if((x >820 && x < 1180 ) && ( y > 400 && y< 450))
                                        {
                                              game[13].display();
                                        }
                                        if((x >900 && x < 1100 ) && ( y > 500 && y< 550))
                                        {
                                              game[17].display();
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                              processing(0);
                                              a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }                                              
                       }
                       if(a)
                       main();
                                        
        }                          
}

void action(int i,int j)
{
    int x=0,y=0;
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(675,150,"Action");
    moveto(675,190);
    lineto(790,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(350,300,"God of War");
    outtextxy(325,325,"Ghost of Sparta");
    
    outtextxy(350,400,"God of War");
    outtextxy(300,425,"Chains of Olympus");
    
    outtextxy(310,500,"Grand Theft Auto");
    outtextxy(315,525,"Chinatown Wars");
    
    outtextxy(900,300,"Metal Gear Solid");
    outtextxy(930,325,"Peace Walker");
    
    outtextxy(940,400,"Dissidia 012");
    outtextxy(935,425,"Final Fantasy");
    
        if((i==10) && (j==11))
    {
     
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                         if((x >320 && x < 600 ) && ( y > 300 && y< 350))
                                        {
                                              game[0].display();
                                        }
                                        
                                        if((x >320 && x < 600 ) && ( y > 400 && y< 450))
                                        {
                                              game[1].display();
                                        }
                                        if((x >310 && x < 600 ) && ( y > 500 && y< 550))
                                        {
                                              game[2].display();
                                        }
                                        if((x >900 && x < 1200 ) && ( y > 300 && y< 350))
                                        {
                                              game[3].display();
                                        }
                                        if((x >935 && x < 1150 ) && ( y > 400 && y< 450))
                                        {
                                              game[4].display();
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                              processing(0);
                                              a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                       }                          
        } 
    
    
}

void RPG(int i,int j)
{
     int x=0,y=0;
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(685,150,"RPG");
    moveto(675,190);
    lineto(790,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(310,300,"Final Fantasy IV");
    outtextxy(245,325,"The Complete Collection");
    
    outtextxy(350,400,"Half-Minute");
    outtextxy(405,425,"Hero");
    
    outtextxy(940,300,"Ape");
    outtextxy(930,325,"Quest");
    
    outtextxy(850,400,"X-Men Legends II");
    outtextxy(845,425,"Rise of Apocalypse");
        
    if((i==10) && (j==11))
    {
                
                                                                    
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >240 && x < 650 ) && ( y > 300 && y< 350))
                                        {
                                              game[5].display();
                                        }
                                        if((x >320 && x < 570 ) && ( y > 400 && y< 450))
                                        {
                                              game[6].display();
                                        }
                                        if((x >900 && x < 1050 ) && ( y > 300 && y< 350))
                                        {
                                              game[7].display();
                                        }
                                        if((x >820 && x < 1160 ) && ( y > 400 && y< 450))
                                        {
                                              game[8].display();
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                             processing(0);
                                             a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                       }
                                        
        } 
}

void driving(int i,int j)
{
     int x=0,y=0;
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(635,150,"Driving");
    moveto(635,190);
    lineto(770,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(360,300,"Wipeout");
    outtextxy(390,325,"Pulse");
    
    outtextxy(340,400,"MotorStorm");
    outtextxy(340,425,"Arctic Edge");
    
    outtextxy(875,300,"Gran");
    outtextxy(850,325,"Turismo");
    
    outtextxy(850,400,"Burnout");
    outtextxy(835,425,"Dominator");
    
        if((i==10) && (j==11))
    {
                                                               
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >320 && x < 550 ) && ( y > 300 && y< 350))
                                        {
                                              game[9].display();
                                        }
                                        if((x >320 && x < 550 ) && ( y > 400 && y< 450))
                                        {
                                              game[11].display();
                                        }
                                        if((x >850 && x < 1010 ) && ( y > 300 && y< 350))
                                        {
                                              game[10].display();
                                        }
                                        if((x >820 && x < 1020 ) && ( y > 400 && y< 450))
                                        {
                                              game[12].display();
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                             processing(0);
                                             a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                       }
                                        
        } 
}

void fighting(int i,int j)
{
     int x=0,y=0;
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(635,150,"Fighting");
    moveto(635,190);
    lineto(780,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(360,300,"Dragon Ball Z");
    outtextxy(310,325,"Tenkaichi Tag Team");
    
    outtextxy(360,400,"Mortal Kombat");
    outtextxy(400,425,"Deception");
    
    outtextxy(885,300,"WWE");
    outtextxy(870,325,"All Stars");
    
    outtextxy(775,400,"WWE Smackdown vs");
    outtextxy(870,425,"Raw 2011");
    
        if((i==10) && (j==11))
    {
        
                                                                    
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >310 && x < 650 ) && ( y > 300 && y< 350))
                                        {
                                              game[14].display();
                                        }
                                        if((x >320 && x < 650 ) && ( y > 400 && y< 450))
                                        {
                                              game[15].display();
                                        }
                                        if((x >850 && x < 1020 ) && ( y > 300 && y< 350))
                                        {
                                              game[16].display();
                                        }
                                        if((x >750 && x < 1150 ) && ( y > 400 && y< 450))
                                        {
                                              game[13].display();
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                             processing(0);
                                             a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                       }
                                        
        } 
}

void shooting(int i,int j)
{
     int x=0,y=0;
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(635,150,"Shooting");
    moveto(635,190);
    lineto(780,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(250,300,"SOCOM: U.S. Navy Seals");
    outtextxy(320,325,"Fireteam Bravo 3");
    
    outtextxy(330,400,"Medal of Honor");
    outtextxy(380,425,"Heroes 2");
    
    outtextxy(915,300,"Resistance");
    outtextxy(910,325,"Retribution");
    
    outtextxy(905,400,"Call of Duty");
    outtextxy(875,425,"Roads to Victory");
    
        if((i==10) && (j==11))
    {
                                                                   
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >250 && x < 680 ) && ( y > 300 && y< 350))
                                        {
                                              game[18].display();
                                        }
                                        if((x >310 && x < 600 ) && ( y > 400 && y< 450))
                                        {
                                              game[19].display();
                                        }
                                        if((x >900 && x < 1100 ) && ( y > 300 && y< 350))
                                        {
                                              game[17].display();
                                        }
                                        if((x >870 && x < 1150 ) && ( y > 400 && y< 450))
                                        {
                                              game[20].display();
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                             processing(0);
                                             a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                       }
                                        
        } 
}    

void sports(int i,int j)
{   
    int x=0,y=0; 
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(635,150,"Sports");
    moveto(635,190);
    lineto(755,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(350,300,"FIFA 11");
        
    outtextxy(330,400,"NBA LIVE");
    outtextxy(400,425,"10");
    
    outtextxy(320,500,"Super Pocket");
    outtextxy(370,525,"Tennis");
    
    outtextxy(850,300,"Madden NFL");
    outtextxy(930,325,"11");
    
    outtextxy(875,400,"Brian Lara");
    outtextxy(855,425,"Pressure Play");
    
    
        if((i==10) && (j==11))
    {
                                                                   
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >340 && x < 500 ) && ( y > 300 && y< 350))
                                        {
                                              game[21].display();
                                        }
                                        if((x >300 && x < 550 ) && ( y > 400 && y< 450))
                                        {
                                              game[22].display();
                                        }
                                        if((x >300 && x < 550 ) && ( y > 500 && y< 550))
                                        {
                                              game[25].display();
                                        }
                                        if((x >840 && x < 1075 ) && ( y > 300 && y< 350))
                                        {
                                              game[23].display();
                                        }
                                        if((x >840 && x < 1080 ) && ( y > 400 && y< 450))
                                        {
                                              game[24].display();
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                             processing(0);
                                             a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                       }
                                        
        } 
}
     
void strategy(int i,int j)
{
     int x=0,y=0;
    setcolor(i);
    setbkcolor(1);
    settextstyle(5,0,5);
    outtextxy(625,150,"Strategy");
    moveto(625,190);
    lineto(765,190);
    setcolor(j);
    settextstyle(1,0,3);
    
    outtextxy(370,300,"Patapon");
    outtextxy(425,325,"3");
        
    outtextxy(340,400,"Final Fantasy");
    outtextxy(390,425,"Tactics");
    
    outtextxy(850,300,"Chessmaster");
    
        if((i==10) && (j==11))
    {
                                                               
    x = getmaxx( );
    y = getmaxy( );
    
    
    setmousequeuestatus(WM_LBUTTONDOWN);
    
    while(!ismouseclick(WM_LBUTTONDOWN));
                     {
                                        getmouseclick(WM_LBUTTONDOWN,x,y);
                                        
                                        
                                        if((x >370 && x < 500 ) && ( y > 300 && y< 350))
                                        {
                                              game[26].display();
                                        }
                                        if((x >340 && x < 560 ) && ( y > 400 && y< 450))
                                        {
                                              game[27].display();
                                        }
                                        if((x >840 && x < 1060 ) && ( y > 300 && y< 350))
                                        {
                                              game[28].display();
                                        }
                                        if((x >20 && x < 200 ) && ( y > 130 && y< 180))
                                        {
                                             del();
                                             recommend(10,11);
                                        }
                                        if((x >1060 && x < 1225 ) && ( y > 0 && y<40))
                                        {
                                             processing(0);
                                             a=1;
                                        }
                                        if((x >20 && x < 200 ) && ( y > 205 && y<255))
                                        {
                                              del();
                                              action(10,11);
                                        }
                                             
                                        if((x >20 && x < 200 ) && ( y > 275 && y< 325))
                                        {
                                             del();
                                             RPG(10,11);
                                        }
                                        else if((x >20 && x < 200 ) && ( y > 345 && y<395))
                                        {
                                             del();
                                             driving(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 415 && y<465))
                                        {
                                             del();
                                             fighting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 485 && y<535))
                                        {
                                             del();
                                             shooting(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 555 && y<605))
                                        {
                                             del();
                                             sports(10,11);
                                        }
                                        if((x >20 && x < 200 ) && ( y > 625 && y<675))
                                        {
                                             del();
                                             strategy(10,11);
                                        }
                                        if((x >1225 && x < 1275 ) && ( y > 0 && y<40))
                                        {
                                             exit(0);
                                        }
                                        if((x >220 && x < 430 ) && ( y > 0 && y<125))
                                        {
                                              coninfo();
                                        }
                                        if((x >430 && x < 640 ) && ( y > 0 && y<125))
                                        {
                                              abtus();
                                        }
                                        if((x >640 && x < 850 ) && ( y > 0 && y<125))
                                        {
                                              CT();
                                        }
                                        if((x >850 && x < 1060 ) && ( y > 0 && y<125))
                                        {
                                              help();
                                        }
                                        if((x >1060 && x < 1275 ) && ( y > 40 && y<125))
                                        {
                                              ccarddet();
                                        }
                       }
                                        
        } 
}
