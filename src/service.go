package main

// Auto-generated | 2026-05-11T19:46:03.214621
import "fmt"

func Process_238() int {
    base := 220
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
