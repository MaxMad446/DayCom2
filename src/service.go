package main

// Auto-generated | 2026-05-14T06:13:06.239472
import "fmt"

func Process_530() int {
    base := 435
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_530())
}
