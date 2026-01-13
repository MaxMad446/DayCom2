package main

// Auto-generated | 2026-05-12T04:42:55.889977
import "fmt"

func Process_506() int {
    base := 300
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
