package main

// Auto-generated | 2026-05-12T03:45:48.801987
import "fmt"

func Process_869() int {
    base := 70
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_869())
}
