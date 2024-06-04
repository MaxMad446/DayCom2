package main

// Auto-generated | 2026-05-11T22:41:03.938039
import "fmt"

func Process_662() int {
    base := 464
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
