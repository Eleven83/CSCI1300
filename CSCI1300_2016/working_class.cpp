class Lamp
{
   public:
      string style;
      char color;
      float wattage;
      int bulbs;

   public:
      Lamp()
      {
          style = "Plain";
          color = 'N';
          wattage = 0;
          bulbs = 1;
      }

      Lamp(string s_style, char s_color, float s_wattage, int s_bulbs)
      {
          style = s_style;
          color = s_color;
          wattage = s_wattage;
          bulbs = s_bulbs;
      }
};
