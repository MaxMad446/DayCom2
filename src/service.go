package main

// Auto-generated | 2026-05-14T18:02:01.197940
import "fmt"

func Process_162() int {
    base := 140
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
