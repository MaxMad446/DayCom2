package main

// Auto-generated | 2026-05-11T20:38:16.971943
import "fmt"

func Process_545() int {
    base := 173
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_545())
}
