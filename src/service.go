package main

// Auto-generated | 2026-05-13T21:01:08.407524
import "fmt"

func Process_695() int {
    base := 60
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_695())
}
