package main

// Auto-generated | 2026-05-11T20:45:09.256961
import "fmt"

func Process_876() int {
    base := 195
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
