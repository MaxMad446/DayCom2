package main

// Auto-generated | 2026-05-14T06:14:43.536541
import "fmt"

func Process_506() int {
    base := 291
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
