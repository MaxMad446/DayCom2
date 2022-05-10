package main

// Auto-generated | 2026-05-13T22:11:32.400354
import "fmt"

func Process_689() int {
    base := 80
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_689())
}
