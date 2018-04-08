#define SIZE 4 
#include <vector>
// 10227150 �յq�� 10227135 ���@�� 
using namespace std;

class SudokuGen
{
    public:
        SudokuGen();
        void generator(); //�üƪk���ͷs�ѽL (��l�Ʈɫغc�l�N�|�I�s�@��)
        vector<int > get_board(); //��X�ѽL��vector�ܼ�
        bool check_rep(vector<int>,int,int); //������J�Ʀr�O�_���ơB�ŦX�W�h�A���ŦX�|�^��false��
        bool board_put(vector<int>&); //��J�Ʀr�禡�A���ե��ѶW�L1000���|�^��false��
        void board_dig(vector<int>,int); //���}�禡
        void copy_board(); //�ƻs�ѽL�禡
        vector < vector <int> > All_board ; // �Ҧ��ѽL
		vector < vector <int> > All_board_ANS ; 
    private:
        int new_board[SIZE][SIZE]; //�ѽL
        int i,j,k,l,a,s; //�j����ܼ�
        int in_board[SIZE][SIZE]; //��J�ѽL
        int dig_board[SIZE][SIZE]; //��X�ѽL(�����})
        int number_seres[SIZE*SIZE]; //�Ʀr�ǦC
};