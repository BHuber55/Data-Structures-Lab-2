#if !defined RANDOM_H
#define RANDOM_H

//Random Comment to test git

class Random
{
   private:
      Random();
      void randomInit();

   public:
      virtual ~Random();
      static Random* getRandom();

      int getRandomInt(int lower, int upper);
      float getRandomFloat(float lower, float upper);
};

#endif
