package main

// Auto-generated | 2026-05-11T20:24:19.115177
import "fmt"

func Process_802() int {
    base := 364
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_802())
}
