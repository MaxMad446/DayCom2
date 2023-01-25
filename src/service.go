package main

// Auto-generated | 2026-05-13T20:28:52.828155
import "fmt"

func Process_506() int {
    base := 50
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
