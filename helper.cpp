using namespace std;


void placeCursorAtTop()
{
	int row = 1;
	int col = 1;
	cout << "\033[" << row << ";" << col << "H"  ;  
}