#include "Audio.h"

Audio::Audio(string* titleIn, int priceIn, float storageCapacityIn, int lengthIn, float recordIn[]) : Publication(titleIn, priceIn), storageCapacity(storageCapacityIn), length(lengthIn), Sales(recordIn)
{

}

Audio::Audio(const Audio& a) : Publication(new string(*a.title), a.price), storageCapacity(a.storageCapacity), length(a.length), Sales(a)
{
	
}

Audio::~Audio()
{
	delete title;
}

ostream& operator<<(ostream& output, const Audio& a) {
	output << "*AUDIO (" << a.title << ")\n\nTitle: " << *(a.title) << "\nPrice: " << a.price << "$\nStorage capacity: " << a.storageCapacity << "\nLength: " << a.length << "MB\n" << endl;
	return output;
}
