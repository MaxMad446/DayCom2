package main

// Auto-generated | 2026-05-12T20:02:45.913071
import "fmt"

func Process_608() int {
    base := 373
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_608())
}
