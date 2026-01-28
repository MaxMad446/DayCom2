package main

// Auto-generated | 2026-05-12T04:45:01.722378
import "fmt"

func Process_101() int {
    base := 132
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
