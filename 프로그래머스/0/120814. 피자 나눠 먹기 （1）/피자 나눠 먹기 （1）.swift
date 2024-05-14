import Foundation

func solution(_ n:Int) -> Int {
    var a = 0
    var b = 0 
    if n / 7 <= 1 {
        a = 1
    }
    else if n / 7 > 1 {
         if n % 7 == 0 {
             a = n / 7
         }
        else {
            a = n / 7 + 1
        }
    }
    return a
}