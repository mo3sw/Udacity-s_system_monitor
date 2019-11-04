#include "processor.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  return ((float)LinuxParser::ActiveJiffies()) / ((float)LinuxParser::Jiffies());
}