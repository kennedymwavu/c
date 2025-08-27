char *get_temperature_status(int temp) {
  char *res = "just right";

  if (temp < 70) {
    res = "too cold";
    return res;
  }

  if (temp > 90) {
    res = "too hot";
    return res;
  }

  return res;
}
