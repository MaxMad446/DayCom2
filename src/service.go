package main

// Auto-generated | 2026-05-12T20:58:39.894047
import "fmt"

func Process_868() int {
    base := 93
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
