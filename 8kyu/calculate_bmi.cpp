//Write function bmi that calculates body mass index (bmi = weight / height2).

//if bmi <= 18.5 return "Underweight"

//if bmi <= 25.0 return "Normal"

//if bmi <= 30.0 return "Overweight"

//if bmi > 30 return "Obese"

std::string bmi(double w, double h) 
{
  float bmi = w / (h * h);
  
  std::cout << bmi;
  
  if (bmi <= 18.5) {
    return "Underweight";
  }
  
  if (bmi <= 25) {
    return "Normal";
  }
  
  if (bmi <= 30) {
    return "Overweight";
  }
  
  return "Obese";
}
