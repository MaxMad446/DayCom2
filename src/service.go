package main

// Auto-generated | 2026-05-11T20:37:23.612788
import "fmt"

func Process_977() int {
    base := 72
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
