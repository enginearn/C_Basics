#include <stdio.h>
#include <time.h>

#define REPEAT 2          // 2回繰り返す
#define SAMPLE_LINE_MAX 2 // 2行分の文字列を入力する
#define GOOD_TIME 20      // 20秒以内であればGood
#define BAD_TIME 40       // 40秒以内であればBad

int main(void)
{
    char first_line[] = "Ask where the sunglasses are.";          // 1行目の文字列
    char second_line[] = "Please give me a steak and some wine."; // 2行目の文字列
    int input_char,
        count,       // 入力した文字数
        line,        // 入力した行数
        begin_input, // 入力開始時刻
        end_input,   // 入力終了時刻
        input_time,  // 入力にかかった時間
        index,       // 文字列の添字
        error_count; // 入力ミスの回数
    time_t t;        // time_t型の変数tを宣言

    printf("タイピングゲーム スタート💨\n");

    for (count = 0; count < REPEAT; count++) // REPEAT回数繰り返す
    {
        for (line = 0; line < SAMPLE_LINE_MAX; line++) // 2行分の文字列を入力する
        {
            if (line == 0) // 1行目の文字列であれば
            {
                printf("%s\n", first_line); // 1行目の文字列を表示
            }
            else
            {                                // 2行目の文字列を入力する
                printf("%s\n", second_line); // 2行目の文字列を表示
            }
            begin_input = time(&t); // 入力開始時刻を取得
            index = 0;              // 文字列の添字を初期化
            error_count = 0;        // エラーの回数を初期化
            if (line == 0)          // 1行目の文字列であれば
            {
                while ((input_char = getchar()) != '\n') // 改行文字が入力されるまでループ
                {
                    if (first_line[index] != '\0') // 文字列の終端でない場合
                    {
                        if (input_char != first_line[index]) // 入力した文字と文字列が一致しない場合
                        {
                            error_count++; // エラーの回数をカウント
                        }
                    }
                    index++; // 文字列の添字をインクリメント
                }
            }
            else
            {
                while ((input_char = getchar()) != '\n') // 改行文字が入力されるまでループ
                {
                    if (second_line[index] != '\0') // 文字列の終端でない場合
                    {
                        if (input_char != second_line[index]) // 入力した文字と文字列が一致しない場合
                        {
                            error_count++; // エラーの回数をカウント
                        }
                    }
                    index++; // 文字列の添字をインクリメント
                }
            }
        }
        end_input = time(&t);                 // 入力終了時刻を取得
        input_time = end_input - begin_input; // 入力にかかった時間を計算
        printf("time = %d ", input_time);     // 入力にかかった時間を表示
        printf("error = %d\n", error_count);  // 入力にかかった時間を表示

        if (error_count == 0) // エラーがなければ
        {
            if (input_time <= GOOD_TIME) // 入力にかかった時間がGOOD_TIME以下であれば
            {
                printf("Good!🎊\n"); // Good!と表示
            }
            else if (input_time <= BAD_TIME) // 入力にかかった時間がBAD_TIME以下であれば
            {
                printf("Bad!💢\n"); // Bad!と表示
            }
            else
            {                             // 入力にかかった時間がBAD_TIMEより大きければ
                printf("Very Bad!💢💢💢\n"); // Very Bad!と表示
            }
        }
        else
        {
            printf("Typo!!!💥\n"); // Typo!!!と表示
        }
    }
    return 0;
}
