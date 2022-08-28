package main

// Auto-generated | 2026-05-11T21:16:53.709569
import "fmt"

func Process_781() int {
    base := 159
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
