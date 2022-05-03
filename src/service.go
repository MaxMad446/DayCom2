package main

// Auto-generated | 2026-05-13T22:10:58.390791
import "fmt"

func Process_689() int {
    base := 158
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_689())
}
