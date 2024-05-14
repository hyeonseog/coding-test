import Foundation

func solution(_ price:Int) -> Int {
    
    var a = 0.0
    switch price {
        case 10..<100000:
            a = Double(price)
        case 100000..<300000:
            a = Double(price) * 0.95
        case 300000..<500000:
            a = Double(price) * 0.9
        default:
            a = Double(price) * 0.8
    }
    return Int(a)
}