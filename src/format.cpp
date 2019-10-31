#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
  long mySeconds = seconds % 60;
  seconds = seconds - mySeconds;
  seconds = seconds / 60;
  
  long myMinutes = seconds % 60;
  seconds = seconds - myMinutes;
  seconds = seconds / 60;
  
  long myHours = seconds;
  
  string myStrSeconds;
  string myStrMinutes;
  string myStrHours;
  
  if(mySeconds < 10){
    myStrSeconds = "0"+std::to_string(mySeconds);
  }
  else{
    myStrSeconds = std::to_string(mySeconds);
  }
  if(myMinutes < 10){
    myStrMinutes = "0"+std::to_string(myMinutes);
  }
  else{
    myStrMinutes = std::to_string(myMinutes);
  }
  if(myHours < 10){
    myStrHours = "0"+std::to_string(myHours);
  }
  else{
    myStrHours = std::to_string(myHours);
  }
  
  
  string myStr = myStrHours + ":" + myStrMinutes + ":" + myStrSeconds;
  
  return myStr;
}