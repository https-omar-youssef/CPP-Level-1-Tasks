#include <iostream>
using namespace std;

int main()

{
cout << "\n\n";
    
                    float Billvalue;

    cout << "How much does his/her meale cost ? ";
        cin >> Billvalue;

cout << "\n\n";
cout << "______________________\n\n";
        //float TotalCheck = Billvalue + (Billvalue * 0.1) + ((Billvalue + (Billvalue * 0.1)) * 0.16);
        float TotalCheck =  Billvalue * 1.1 * 1.16;
    cout << "Total cost of his/her check = " << TotalCheck;
cout << endl << endl;

                    return 0;

}                   /* الي انا عامله افضل من الكومين ليه ؟ .... عشان الي انا عامله هو اختصار للكومينت حرفيا
                 انت لما تحسب ان الوجبة ب100 بعدين تضرب في 0.1 هيديك 10 بعدين هنجمعهم هيديك    110
                    وبعدين تضرب ال110 في 0.16 .. طب وليه كل اللفة دي ؟ 
                    ما من الأول انت اضرب سعر الوجبه في 1.1 و 1.16 
                  طب ليه اعمل كده .. ببساطة عشان ال1.1 هي جايه من 10% مجموعة على 100% بس
                 انت بقا هتعمل نفس الحوار مع ال1.16 هي عبارة عن 16% مع 100% بس
                 عشان جمع النسب المئوية بيبقى كده مش بيبقى زاي ما انت فاكر زاي الارقام العاديه