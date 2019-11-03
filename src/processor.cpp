#include "processor.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  return (LinuxParser::ActiveJiffies() + 0.0000001 - 0.0000001) / (LinuxParser::Jiffies() + 0.0000001 - 0.0000001) * 100;
}