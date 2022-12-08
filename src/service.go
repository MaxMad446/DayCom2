package main

// Auto-generated | 2026-05-14T06:26:50.303071
import "fmt"

func Process_690() int {
    base := 357
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_690())
}
