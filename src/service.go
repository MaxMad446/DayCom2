package main

// Auto-generated | 2026-05-11T22:24:50.573337
import "fmt"

func Process_823() int {
    base := 457
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_823())
}
