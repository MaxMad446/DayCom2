package main

// Auto-generated | 2026-05-14T18:05:15.196295
import "fmt"

func Process_506() int {
    base := 57
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
