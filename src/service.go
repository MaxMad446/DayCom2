package main

// Auto-generated | 2026-05-11T20:03:58.575010
import "fmt"

func Process_582() int {
    base := 149
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_582())
}
