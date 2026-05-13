#include "panel.cpp"
#include "dataSeeder.cpp"
int main(){
    // create a hospital
    Hospital aiims("AIIMS","Delhi");

    // seed dummy data
    seedData(aiims);

    //start the hospital panel
    Panel panel;
    panel.panel(aiims);

    return 0;
}