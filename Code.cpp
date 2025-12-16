#include <iostream>
#include <fstream>//for handling files
#include<chrono>//for time management
#include <string>//for managing with strings
using namespace std;

void easyText();
void mediumText();
void difficultText();
void veteranText();
void showData();
void displayMenu();


const string EASY_PARAGRAPHS[] = {//Paragraphs for easy level difficulty
    
    
    "the sun rises in the east and sets in the west every single day "
    "the sky turns orange and pink during sunset and it looks very beautiful",
    
    
    "my dog likes to run around the garden and play with his red ball "
    "he is very friendly and loves to meet new people at the park",
    
    
    "i like to read books before going to sleep every night "
    "my favorite stories are about animals and adventures in magical lands",
    
    
    "the rain is falling outside and the streets are getting wet "
    "i can hear the sound of raindrops on my window and it makes me feel calm",
    
    
    "we went to the beach last weekend and had a wonderful time "
    "we built sandcastles and played in the waves until the sun went down",
    
    
    "my mother makes the best cookies in the whole world "
    "she uses chocolate chips and bakes them until they are golden brown",
    
    
    "the little bird sits on the tree branch and sings a sweet song "
    "every morning i wake up to the beautiful sound of birds singing outside",
    
    
    "i enjoy playing video games with my friends on the weekends "
    "we laugh and have fun together even when we lose the game",
    
    
    "the flowers in our garden are blooming and they smell so nice "
    "there are roses and tulips and daisies in many different colors",
    
    
    "my little sister is learning how to ride her bicycle "
    "she falls down sometimes but she always gets up and tries again",
    
    
    "the moon shines bright in the dark night sky above us "
    "i like to look at the stars and wonder what is out there in space",
    
    
    "our teacher told us an interesting story about a brave lion "
    "the lion helped all the animals in the forest and became their king",
    
    
    "i woke up early this morning and made breakfast for my family "
    "we had toast with butter and jam and drank fresh orange juice",
    
    
    "the cat is sleeping on the soft couch in the living room "
    "she looks so peaceful and warm curled up in a little ball",
    
    
    "we are planning a trip to the mountains during the summer holidays "
    "i want to go hiking and see the beautiful views from the top",
    
    
    "my best friend and i have known each other since we were kids "
    "we go to the same school and sit next to each other in class",
    
    
    "the ice cream shop on the corner sells the most delicious flavors "
    "my favorite is chocolate but i also love strawberry and vanilla",
    
    
    "the old man walks his dog every evening in the park near our house "
    "his dog is very old too but they both seem happy together",
    
    
    "learning something new can be hard at first but it gets easier "
    "you just need to practice every day and never give up trying",
    
    
    "the children are playing in the playground after school today "
    "they are running around and laughing and having so much fun together"

};

const int EASY_COUNT = 20;


const string MEDIUM_PARAGRAPHS[] = {//Paragraphs for medium difficulty level
    
    
    "The Ancient Pyramids of Egypt have fascinated historians and travelers for centuries. "
    "These magnificent structures were built as tombs for powerful Pharaohs and their treasures.",
    
    
    "Christopher Columbus embarked on his famous voyage across the Atlantic Ocean in fourteen ninety two. "
    "His expedition changed the course of World History and connected different continents forever.",
    
   
    "The Amazon Rainforest is home to countless species of exotic plants and animals. "
    "Scientists believe that many undiscovered creatures still live deep within this mysterious jungle.",
    
    
    "William Shakespeare is considered one of the greatest Writers in the English Language. "
    "His brilliant plays and sonnets continue to inspire audiences and readers around the World.",
    
    
    "Mount Everest stands as the tallest mountain on Planet Earth reaching incredible heights. "
    "Brave mountaineers from different countries attempt to climb its dangerous peaks every year.",
    
    
    "The Industrial Revolution transformed society by introducing powerful machines and factories. "
    "This remarkable period changed how people worked and lived in Europe and North America.",
    
    
    "Leonardo da Vinci was a remarkable genius who excelled in Art Science and Engineering. "
    "His famous painting the Mona Lisa attracts millions of visitors to the Louvre Museum annually.",
    
    
    "The Pacific Ocean is the largest and deepest body of water on our entire Planet. "
    "Mysterious creatures inhabit its unexplored depths waiting to be discovered by marine Scientists.",
    
    
    "Albert Einstein developed the Theory of Relativity which revolutionized modern Physics. "
    "His extraordinary contributions to Science earned him the prestigious Nobel Prize in nineteen twenty one.",
    
    
    "The Great Wall of China stretches thousands of miles across mountains and valleys. "
    "Ancient Chinese Emperors constructed this magnificent barrier to protect their Kingdom from invaders.",
    
    
    "Classical Music composed by Mozart and Beethoven continues to captivate audiences Worldwide. "
    "Symphony Orchestras perform their timeless masterpieces in prestigious Concert Halls every evening.",
    
    
    "The Mediterranean Sea has witnessed the rise and fall of many powerful Civilizations. "
    "Ancient Greeks Romans and Egyptians all sailed these historic waters for trade and exploration.",
    
    
    "Professional Athletes dedicate countless hours to training and perfecting their physical abilities. "
    "The Olympic Games showcase the extraordinary talents of competitors from Nations around the Globe.",
    
    
    "The Renaissance period sparked a cultural revolution across European Countries and Cities. "
    "Artists Philosophers and Scientists made groundbreaking discoveries that shaped our modern World.",
    
    
    "Queen Victoria ruled the British Empire during a time of tremendous expansion and progress. "
    "The Victorian Era brought significant changes to Literature Fashion and Social customs in England.",
    
    
    "Astronomers use powerful Telescopes to observe distant Galaxies and mysterious Phenomena. "
    "The Universe contains billions of Stars and Planets waiting to be explored by future generations.",
    
    
    "The African Savanna provides a natural habitat for majestic Lions Elephants and Giraffes. "
    "Wildlife Photographers travel great distances to capture these beautiful animals in their environment.",
    
    
    "Architecture throughout History reflects the creativity and ambition of different Civilizations. "
    "From Gothic Cathedrals to Modern Skyscrapers buildings tell the story of Human achievement.",
    
    
    "The French Revolution dramatically transformed the political landscape of Eighteenth Century Europe. "
    "Revolutionary ideas about Liberty Equality and Justice spread rapidly to neighboring Countries.",
    
    
    "Environmental Conservation has become increasingly important in protecting our Natural Resources. "
    "Scientists and Activists work together to preserve Forests Oceans and endangered Wildlife species."

};

const int MEDIUM_COUNT = 20;
const string DIFFICULT_PARAGRAPHS[] = {
    
    
    "The meeting is scheduled for March 15, 2025 at 9:30 in the morning. "
    "Please arrive 15 minutes early and don't forget to bring your notebook!",
    
    
    "Our store sold 2,847 items last week, which is 340 more than the previous week. "
    "The best-selling product was Item 7 with 892 units sold in just 5 days!",
    
    
    "The patient's temperature was recorded at 98.6 degrees at 2:45 in the afternoon. "
    "The doctor prescribed 500 milligrams of medicine to be taken 3 times daily.",
    
    
    "Flight 2847 departs from New York at 10:15 in the morning and arrives in London at 11:30 at night. "
    "The total flight time is 7 hours and 15 minutes.",
    
    
    "The recipe requires 2.5 cups of flour, half a cup of sugar, and 2 large eggs. "
    "Bake at 350 degrees for 25 to 30 minutes until golden brown!",
    
    
    "The company was founded on June 7, 1998 and now has over 12,500 employees worldwide. "
    "Last year, they opened 47 new stores across 8 different countries.",
    
    
    "The marathon results show that John finished 1st with a time of 2:45:30. "
    "Maria came in 2nd at 2:51:15, and David finished 3rd at 2:58:42!",
    
    
    "According to the 2023 census, the city's population grew to 1,245,678 residents. "
    "This represents an increase of 156,000 people over the last 10 years.",
    
    
    "The package weighs 4.5 kilograms and measures 30 by 25 by 15 centimeters. "
    "Standard shipping takes 5 to 7 business days, while express takes only 1 to 2 days.",
    
    
    "Your order was placed on November 23, 2024 at 3:47 in the afternoon. "
    "The estimated delivery date is November 28, 2024 before 8:00 in the evening.",
    
    
    "The exam has 50 questions worth 2 points each, for a total of 100 points. "
    "You need at least 70 points to pass, and you have exactly 90 minutes to finish!",
    
    
    "The stadium can hold 67,500 fans, but today's attendance was only 45,200 people. "
    "The home team won 112 to 104 after an exciting overtime period!",
    
    
    "The gym is open from 5:00 in the morning until 11:00 at night on weekdays. "
    "On weekends, the hours are 7:00 in the morning to 9:00 at night.",
    
    
    "Today's weather shows a high of 78 degrees and a low of 54 degrees. "
    "There is a 40 percent chance of rain after 6:00 in the evening!",
    
    
    "The apartment has 3 bedrooms and 2 bathrooms with 1,850 square feet of space. "
    "It was built in 1995 and completely renovated in 2019.",
    
    
    "The player scored 27 points, grabbed 8 rebounds, and made 12 assists tonight. "
    "He shot 10 for 18 from the field and played for 38 minutes!",
    
    
    "The car gets 32 miles per gallon in the city and 41 on the highway. "
    "The fuel tank holds 14.5 gallons, giving you a range of over 500 miles!",
    
    
    "The experiment requires mixing 250 milliliters of Solution A with 175 milliliters of Solution B. "
    "The temperature must stay between 68 and 72 degrees for best results.",
    
    
    "The website had 2,547,832 visitors last month, up from 1,890,445 in January. "
    "Users spent an average of 4 minutes and 23 seconds on each visit!",
    
    
    "The train departs at 8:15 in the morning and arrives at 2:45 in the afternoon. "
    "The journey covers 487 miles with stops at 6 different stations along the way."

};

const int DIFFICULT_COUNT = 20;
    const string VETERAN_PARAGRAPHS[] = {
    "int main() { int x = 10; int y = 20; if (x < y) { cout << \"X is smaller!\"; } return 0; }",
    
    
    "function calculateTotal(price, qty) { let tax = price * 0.15; return (price * qty) + tax; } // returns total",
    
    
    "Invoice #INV-2024/0892: Subtotal = $1,245.00 | Tax (8.25%) = $102.71 | Shipping = $15.99 | TOTAL = $1,363.70",
    
    
    "Einstein's equation: E = mc^2 where E = energy (joules), m = mass (kg), c = speed of light (3 x 10^8 m/s)",
    
    
    "SELECT * FROM users WHERE (age >= 18 AND status = 'active') OR (role = 'admin'); --fetch records",
    
    
    "NYSE Update: AAPL +2.35% ($187.42) | GOOGL -1.18% ($141.56) | MSFT +0.87% ($378.91) | Volume: 45.2M shares!",
    
    
    "Photosynthesis: 6CO2 + 6H2O + light energy --> C6H12O6 + 6O2 | Glucose (C6H12O6) = sugar produced by plants",
    
    
    "Secure Passwords: Tr0ub4dor&3 | correct#horse$battery%staple | P@$$w0rd!2024 | xK#9$mP@2&vL!",
    
    
    "Location: 40.7128N, 74.0060W (New York) | Distance: 5,847.23 km | ETA @ 65 mph = ~56 hrs | Route: I-95 -> I-80",
    
    
    "Song Key: C# Minor | Tempo: 128 BPM | Time Signature: 4/4 | Chords: C#m - G#m - A - E | Duration: 3:45",
    
    
    "<div class=\"header\" id=\"main-nav\"> <a href=\"https://site.com/page?id=123&ref=home\">Click</a> </div>",
    
    
    "Case: Smith v. Jones (2024) | Docket #CV-2024-0847-ABC | Filed: 03/15/2024 | Judge: Hon. R. Williams [Div. 3]",
    
    
    "Quadratic Formula: x = [-b +/- sqrt(b^2 - 4ac)] / 2a | If a=2, b=5, c=3: x = [-5 +/- sqrt(25-24)] / 4",
    
    
    "Server: 192.168.1.1:8080 | Status: [ONLINE] | CPU: 78.5% | RAM: 12.4/16 GB (77.5%) | Uptime: 45d 12h 33m",
    
    
    "Mix: 2/3 cup sugar + 1/4 tsp salt + 3 1/2 cups flour | Bake @ 375F for 20-25 min | Yield: ~24 pieces ($0.45/each)",
    
    
    "if ((a && b) || (c != d)) { result = (x > y) ? x * 2 : y / 2; } else { result = 0; } // ternary operator",
    
    
    "Player Stats [2024]: .328 AVG | 42 HR | 118 RBI | .412 OBP | .587 SLG | WAR: 7.8 | Salary: $32.5M/year",
    
    
    "BTC: $43,567.89 (+5.23%) | ETH: $2,345.67 (-1.45%) | Market Cap: $1.67T | 24h Vol: $89.4B | Fear Index: 65/100",
    
    "Flight #UA-2847: JFK -> LHR | Depart: 10:15 PM (Gate B-22) | Arrive: 11:30 AM (+1) | Seat: 14A [Window] | $1,247.00",
    
    "Order @Store#47: 5x Item_A ($12.99/ea) + 3x Item_B ($8.50/ea) = $90.45 | Discount: -15% | Final: $76.88 {CONFIRMED}"

};

const int VETERAN_COUNT = 20;
int main (){
    int choice;
    bool exitprogram = false;
    while(!exitprogram){
    displayMenu();
    cout << "  Please enter your selection (1-6): ";
    cin>>choice;
    while (choice<1||choice>6){
        cout<<"Invalid choice! Please enter a valid option(1-6): ";
        cin>> choice;
    }
    switch(choice){
        case 1:
            easyText();
            break;
        case 2:
            mediumText();
            break;
        case 3:
            difficultText();
            break;
        case 4:
            veteranText();
            break;
        case 5:
            showData();
            break;
        case 6:
            exitprogram = true;
            cout<<"Thank you for using Typemaster! Make sure to come back again\nKEEP PRACTICING!"<<endl;
    }
}
}
void displayMenu(){
    cout << "\n\n";
    cout << "  ============================================================================" << endl;
    cout << "                                                                              " << endl;
    cout << "                              T Y P E M A S T E R                             " << endl;
    cout << "                           ________________________                           " << endl;
    cout << "                                                                              " << endl;
    cout << "                      Professional Typing Assessment Tool                     " << endl;
    cout << "                                  v1.0.0                                      " << endl;
    cout << "                                                                              " << endl;
    cout << "  ============================================================================" << endl;
    cout << endl;
    cout << "  Welcome! This application will measure your typing speed and accuracy." << endl;
    cout << endl;
    cout << "  +---------------------------------------------------------------------------+" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |   DIFFICULTY LEVELS:                                                      |" << endl;
    cout << "  |   ~~~~~~~~~~~~~~~~~~                                                      |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 1:  EASY                                                      |" << endl;
    cout << "  |                 Simple lowercase words and short sentences                |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 2:  MEDIUM                                                    |" << endl;
    cout << "  |                 Mixed case words with moderate complexity                 |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 3:  DIFFICULT                                                 |" << endl;
    cout << "  |                 Includes numbers, punctuation, and special chars          |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 4:  VETERAN                                                   |" << endl;
    cout << "  |                 Programming syntax, brackets, and complex patterns        |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  +---------------------------------------------------------------------------+" << endl;
    cout << "  |      Option 5:  View Performance Records                                  |" << endl;
    cout << "  |      Option 6:  Exit Application                                          |" << endl;
    cout << "  +---------------------------------------------------------------------------+" << endl;
    cout << endl;
   
}


void easyText(){
      cout << "\n";
    cout << "    +----------------------------------------------------------+" << endl;
    cout << "    |                      EASY MODE                           |" << endl;
    cout << "    +----------------------------------------------------------+" << endl;
   
}

void mediumText(){
      cout << "\n";
    cout << "    +----------------------------------------------------------+" << endl;
    cout << "    |                      MEDIUM MODE                          |" << endl;
    cout << "    +----------------------------------------------------------+" << endl;
    

}
void difficultText(){
      cout << "\n";
    cout << "    +----------------------------------------------------------+" << endl;
    cout << "    |                      DIFFICULT MODE                           |" << endl;
    cout << "    +----------------------------------------------------------+" << endl;
  
}
void veteranText(){
      cout << "\n";
    cout << "    +----------------------------------------------------------+" << endl;
    cout << "    |                      VETERAN MODE                           |" << endl;
    cout << "    +----------------------------------------------------------+" << endl;
    
}
void showData(){
    cout << "\n[VIEWING RECORDS]"<<endl;

}